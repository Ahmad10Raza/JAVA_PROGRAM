function printPattern(range) {
    for(var i=1;i<=range;i++){
      var str="";
      for(var j=1;j<=i;j++){
        str += j+" ";
    }
    console.log(str);
    }
  }
  
      printPattern(8);
  /* 1 
     1 2 
     1 2 3 
     1 2 3 4 
     1 2 3 4 5 
     1 2 3 4 5 6 
     1 2 3 4 5 6 7 
     1 2 3 4 5 6 7 8 */