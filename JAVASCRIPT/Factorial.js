function factorial(i) {
    if (i > 1) { 
      return factorial(i - 1) * i;
    }
    return 1;
  }
  
  console.log(factorial(69));
  // 120