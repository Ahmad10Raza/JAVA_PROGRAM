function fibonacci(n) {
    var n1=0;
    var n2=1;
    var count=2;    
    var n3;
    console.log(n1,n2);
    while(count<n){
     n3=n1+n2;
     console.log(n3); //print current element
     n1=n2;
     n2=n3;
     count++;
    }
  }
  
  fibonacci(8) //0 1 1 2 3 5 8 13