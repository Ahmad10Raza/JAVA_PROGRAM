var arr = [2, 45, 3, 67, 34, 567, 34, 345, 123];  
var largest = arr[0];
for(var i=0;i<arr.length;i++){
   largest = arr[i]>largest ? arr[i]:largest; //Check largest number
}
console.log(largest) //567