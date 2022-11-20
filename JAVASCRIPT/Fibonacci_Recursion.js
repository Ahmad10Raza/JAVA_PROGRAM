function findFib(n){
    if(n<=0){
      return 0;
    }
    else if(n<3){
      return 1;
    }
   return findFib(n-1) + findFib(n-2);
  }
  
  console.log(findFib(5));
  // 5
  
  console.log(findFib(9));
  // 34