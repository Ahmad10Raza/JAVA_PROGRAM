import React from 'react';
import "./App.css";
import Banner from "./Components/Banner"
import Nav from "./Components/Nav"
import Services from "./Components/Services";
import About from "./Components/About"
import Prices from './Components/Prices';
import Contact from './Components/Contact';

function App() {
  return (
    <div>
          <Banner/>
          <Nav />
          <Services/>
          <About/>
          <Prices/>
          <Contact/>
    </div>
  );
};

export default App;
