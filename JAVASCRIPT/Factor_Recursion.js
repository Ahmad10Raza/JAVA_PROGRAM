function printFactors(number, fact){
    if(number/fact < 2){
      console.log(number)
      return;
    }  
    if(number%fact == 0){
      console.log(fact); 
    }
    return printFactors(number, fact+1);
  }
  
  function findFactors(number){
    printFactors(number,1);
  }
  
  findFactors(20);
  // 1 
  // 2
  // 4
  // 5
  // 10
  // 20