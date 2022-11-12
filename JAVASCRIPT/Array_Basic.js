let fruits=['apple','mango','grapes'];
let num=[1,2,3,4,5,6];
let mixed=[1,2,3.5,-5,'apple',null,undefined]; //array is object in js
console.log(fruits);
console.log(mixed);
mixed.push("banana");//add at last index 
console.log(mixed);
num.pop(1);//remove 1st index
num.unshift("banana")//add at 1st index
let arr1=num.slice(0);//clone of num array
let arr2=[].concat(mixed);//clone of mixed
let arr3=[...fruits];//spread operator for cloning array

