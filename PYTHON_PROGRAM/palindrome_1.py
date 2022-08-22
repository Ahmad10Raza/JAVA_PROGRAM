num=int(input("Enter the  number : "))
original_num=num
reverse_num=0
while (num>0):
    remainder=num%10
    reverse_num=(reverse_num*10)+remainder
    num/=10

    if original_num==reverse_num :
        print("Number is plaindrome ...")
    else :
        print("Not plaindrome ....")
