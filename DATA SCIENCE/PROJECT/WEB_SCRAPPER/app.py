# This main python file for maneging whole project using python flask framework
from flask import Flask, render_template, request,jsonify
from flask_cors import CORS,cross_origin  #for cross countary request...
import requests
from bs4 import BeautifulSoup as bs   # To make dumb data to look like human readable
from urllib.request import urlopen as uReq
import logging   # for creating log file to store all processing data
import pymongo 
#configureing log
logging.basicConfig(filename="scrapper.log" , level=logging.INFO)

app = Flask(__name__)

@app.route("/", methods = ['GET'])
@cross_origin()
def homepage():
    return render_template("index.html")
# redndering index html web page that mean home page

# creating scarping function
@app.route("/review" , methods = ['POST' , 'GET'])
@cross_origin()
def index():
    if request.method == 'POST':
        try:
            # get search key from user 
            searchString = request.form['content'].replace(" ","")
             # taking flipkart as target
            flipkart_url = "https://www.flipkart.com/search?q=" + searchString
             # opening url to enter home page
            uClient = uReq(flipkart_url)
            # reading page data
            flipkartPage = uClient.read()
            # now we get data so close connection
            uClient.close()
            # Now we have dumb data so let make human readable form
            # using beautishoup as bs
            flipkart_html = bs(flipkartPage, "html.parser")
             # inspect flipcart page see class of review section
            bigboxes = flipkart_html.findAll("div", {"class": "_1AtVbE col-12-12"})
            # on above data 3 div is top bar ,name so on.. delete it
            del bigboxes[0:3]
             # let find for one user and then we use for loop for all user
            box = bigboxes[0]
            # we get link of one particular item
            productLink = "https://www.flipkart.com" + box.div.div.div.a['href']
             # send request on those link and recieve data
            prodRes = requests.get(productLink)
            prodRes.encoding='utf-8'
            # again use make human readable using bs
            prod_html = bs(prodRes.text, "html.parser")
            print(prod_html)
            # find user feedback using inspect on that page
            commentboxes = prod_html.find_all('div', {'class': "_16PBlm"})
            
            
            # Now saving data to file
            # stroring data in csv(comma separated file)
            filename = searchString + ".csv"
            fw = open(filename, "w")
            # creating coloumn name to store all ob servation row wise
            headers = "Product, Customer Name, Rating, Heading, Comment \n"
            # writing into file 
            fw.write(headers)
            reviews = []
            # for loop for get data of all user data on above we get of only one
            for commentbox in commentboxes:
                try:
                    #name.encode(encoding='utf-8')
                    # get all userName from data
                    name = commentbox.div.div.find_all('p', {'class': '_2sc7ZR _2V5EHH'})[0].text

                except:
                    logging.info("name")

                try:
                    #rating.encode(encoding='utf-8')
                    rating = commentbox.div.div.div.div.text


                except:
                    rating = 'No Rating'
                    logging.info("rating")

                try:
                    #commentHead.encode(encoding='utf-8')
                    commentHead = commentbox.div.div.div.p.text

                except:
                    commentHead = 'No Comment Heading'
                    logging.info(commentHead)
                try:
                    comtag = commentbox.div.div.find_all('div', {'class': ''})
                    #custComment.encode(encoding='utf-8')
                    custComment = comtag[0].div.text
                except Exception as e:
                    logging.info(e)

                mydict = {"Product": searchString, "Name": name, "Rating": rating, "CommentHead": commentHead,
                          "Comment": custComment}
                reviews.append(mydict)
            # connecting to database 
            client = pymongo.MongoClient("mongodb+srv://ahmad_raza:konoha@cluster0.tgzynne.mongodb.net/?retryWrites=true&w=majority")
            #creating new database
            db = client['review_scrap']
            # creating new collection
            review_col = db['review_scrap_data']
            #inserting all data into review_col collection
            review_col.insert_many(reviews)
            logging.info("log my final result {}".format(reviews))
            # returnign  to render_template("result.html")
            return render_template('result.html', reviews=reviews[0:(len(reviews)-1)])
        except Exception as e:
            logging.info(e)
            return 'something is wrong'
    # return render_template('results.html')

    else:
        return render_template('index.html')


if __name__=="__main__":
    app.run(host="0.0.0.0",port=692,debug=True)
