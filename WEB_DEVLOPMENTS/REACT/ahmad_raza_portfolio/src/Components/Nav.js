import React from "react";
import {FaAlignJustify} from "react-icons/fa";
const Nav=()=>{
    const [state,setState]=React.useState(true);
    return (
        <nav className="navbar">
            <div className="container">
            <div className="navbar_container">
            <ul className="left">
                    <div className="navbar_lfet-logo">
                        <img src="/IMAGES/eagle.png" alt="logo"/>
                    </div>
                </ul>
                {state ?( <ul className="navbar_right">
                    <li> <a href="">Home</a> </li>
                    <li> <a href="">Services</a> </li>
                    <li> <a href="">About</a> </li>
                    <li> <a href="">Skills</a> </li>
                    <li> <a href="">Portfolio</a> </li>
                    <li> <a href="">Blog</a> </li>
                    <li> <a href="">Contact Me</a> </li>
                </ul>
                ):(
                    ""
                )}
            </div>
            </div>
                <div className="toggle" onClick={()=>setState(!state)}><FaAlignJustify/></div>
        </nav>
    )
};

export default Nav;