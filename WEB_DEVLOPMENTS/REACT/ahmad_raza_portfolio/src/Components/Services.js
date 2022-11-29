import React from "react";
import { FaGithub,FaCamera,FaTv,FaAndroid ,FaChalkboardTeacher,FaFilm } from "react-icons/fa";

const Services = () => {
    const [header] = React.useState({
        mainHeader: "Services", subHeading: "My Services", text: "कल थे यहीं, क्यूँ अब नहीं, तुम और मैं साथ दोनों, क्या मिल गयी तुमको ख़ुशी, होके जुदा.. ये तो बोलो,\
    पयार था वक़्त नहीं,जो बीत गया दो पल में, \
    तू बनके याद रहे, फ़रियाद रहेगा दिल में,\
    क्यूँ अब इक लफ्ज़ नहीं, दिल कहने की हालत में" });
    const [state] = React.useState([
        {
            id:    1,
            icon: 'FaGithub',
            heading: "Web Devlopment",
            text: "Man is still the most extraordinary computer of all.\
                    I do not fear computers. I fear the lack of them."
        },
        {
            id:     2,
            icon: 'FaCamera',
            heading: "PhotoGraphy",
            text: "Man is still the most extraordinary computer of all.\
                I do not fear computers. I fear the lack of them."
        },
        {
            id:     3,
            icon: 'FaTv',
            heading: "Web Design",
            text: "Man is still the most extraordinary computer of all.\
            I do not fear computers. I fear the lack of them."
        },
        {
            id:     4,
            icon: 'FaAndroid',
            heading: "App Devlopment",
            text: "Man is still the most extraordinary computer of all.\
        I do not fear computers. I fear the lack of them."
        },
        {
            id:     5,
            icon: 'FaFilm',
            heading: "Video Editing",
            text: "Man is still the most extraordinary computer of all.\
    I do not fear computers. I fear the lack of them."
        },
        {
            id:     6,
            icon: 'FaChalkboardTeacher',
            heading: "Training",
            text: "Man is still the most extraordinary computer of all.\
    I do not fear computers. I fear the lack of them."
        }
    ]);
    return (
        <div className="services">
            <div className="continer">
                <div className="services__header">
                    <div className="common">
                        <h3 className="heading">{header.mainHeader}</h3>
                        <h1 className="mainHeader">{header.subHeading}</h1>
                        <p className="maineContent">{header.text} </p>
                        <div className="commonBorder"></div>
                    </div>

                    <div className="row bgMain ">
                        {state.map(info=>(
                                 <div className="col-4">
                                 <div className="services__box">
                                     <FaGithub className="commonIcons" />
                                     <div className="services__box-header">{info.heading}</div>
                                     <div className="services__box-p">{info.text}</div>
                                 </div>
                             </div>
                        ))}
                       

                    </div>
                </div>
            </div>
        </div>
    );
}


export default Services