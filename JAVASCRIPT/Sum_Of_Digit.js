function digitSum(num) {
    var sum=0;
    while(num!=0){
     sum += num % 10;
     num = Math.floor(num/10);
    }
    return sum;
  }
  console.log(digitSum(4367)); //20
  console.log(digitSum(56349)); //27