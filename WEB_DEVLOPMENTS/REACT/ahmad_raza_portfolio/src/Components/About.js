import React from 'react'

 const About = () => {
    const [header]=React.useState({
        subHeader:"About Me",
        text:"I am not smart i stay with the problem longer\
                I just always want to learn new skills"
    }) ;
    const [state]=React.useState([
        {id:1,title:"Name:",text:"Ahmad Raza"},
        {id:2,title:"Email:",text:"rjaahmad60@gmail.com"},
        {id:3,title:"Phone:",text:"+91 6388623967"},
        {id:4,title:"Linkedin:",text:"ahmad_raza"},
    ]);
  return (
    <div className='about '>
        <div className='container'>
        <div className="common">
                        <h1 className="mainHeader">{header.subHeader}</h1>
                        <p className="maineContent">{header.text} </p>
                        <div className="commonBorder"></div>
                    </div>
                    <div className='row h-650 alignCenter'>
                        <div className='col-6 '>
                            <div className='about__img'>
                                <img src='/IMAGES/dev_about.png' alt='devloper'/>
                            </div>
                        </div>
                        <div className='col-6'>
                           <div className='about__info'>
                            <h1>Hi There</h1>
                            <div className='about__info-p1'> 
                            “If you look the right way, you can see that the whole world is a garden.” —Frances Hodgson Burnett
“Having a positive attitude isn’t wishy-washy, it’s a concrete and intelligent way to view problems, challenges, and obstacles.” —Jeff Moore
                             </div>
                             <div className='about__info-p2'>
                             “I don’t think of all the misery but of the beauty that still remains.” —Anne Frank
“Optimism is the faith that leads to achievement; nothing can be done without hope.” —Helen Keller
“Our future cannot depend on the government alone. The ultimate solutions lie in the attitudes and the actions of the American people.” —Joe Biden
                             </div>
                             <div className='info_contacts'>
                                <div className='row'>
                                    {state.map((info)=>(
                                    <div className='col-6'>
                                        <strong>{info.title}</strong>
                                        <p>{info.text}</p>
                                    </div>
                                    ))}
                                </div>
                             </div>
                           </div>
                        </div>
                    </div>
        </div>

    </div>
  )
}


export default About;