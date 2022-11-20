f//Program for coundown
function countDown(count){
    console.log(count);
    if(count==0){
      return;
    }
    setTimeout(()=>{countDown(count-1)},1000);
  }
  
  countDown(5);
  // 5 4 3 2 1 0

//program for sum of digit
  var number = 3467;
function digitSum(num){
  if(num==0){
    return num;
  }
  return num%10 + digitSum(Math.floor(num/10));
}
digitSum(number); // 20

