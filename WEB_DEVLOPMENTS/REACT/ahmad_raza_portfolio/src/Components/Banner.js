import React from "react";
import { FaFacebook, FaTwitter, FaPinterestSquare, FaLinkedin, FaGithub,FaPlay } from "react-icons/fa"

const Banner = () => {
    const [state]=React.useState({
        title:"I am Ahmad Raza",
        text:"i,m Ahmad Raza,Beginner Web Developer and also In Future Ethical Hacker",
        image:"/IMAGES/dev.png"
    });
    return (
        <header className="header">
            <div className="container">
                <div className="row">
                    <div className="col-6">
                        <div className="header__content">
                            <div className="header__section">
                                <ul className="header__ul">
                                    <li>
                                        <FaFacebook />
                                    </li>
                                    <li>
                                        <FaTwitter />
                                    </li>
                                    <li>
                                        <FaPinterestSquare />
                                    </li>
                                    <li>
                                        <FaLinkedin />
                                    </li>
                                    <li>
                                        <FaGithub />
                                    </li>
                                </ul>
                                <h1>{state.title}</h1>
                                <p>
                                    {state.text}
                                </p>
                                <div className="header_buttons">
                                    <a href="" className="btn btn-outline">
                                        My Portfolio
                                    </a>
                                    &nbsp;&nbsp;&nbsp;
                                    <a href="" className="btn btn-smart">
                                   < FaPlay  className="play"/>
                                    </a>


                                </div>
                            </div>
                        </div>
                    </div>
                </div>
                <div className="col-6"> <div className="banner__img">
                    <img src={state.image} alt="man"/>
                    </div>
                </div>
            </div>
        </header>
    );
}

export default Banner;