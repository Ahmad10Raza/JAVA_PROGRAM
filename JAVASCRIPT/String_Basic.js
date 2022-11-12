// let str='Hey Dear How Are You ?';
// console.log(str.length);//length is 22 space is also include
// console.log(str[0]);//H
// console.log(str[2]);//y
// console.log(str[50]);//undefined
// console.log(str[str.length-2]);//spcae print krega
// console.log(str[str.length-9]);//A 
// let str2='   here is     example of     trim() string function     ';
// console.log(str2.length);
// let str3=str2.trim();
// console.log(str3);
// str2=str2.trim();   //trime() function remove only first and last postion space of string
// console.log(str2);

// to upercase and lower case 
let str4='Here is exampler OF to LOwer case And to UPPERCASE ';
console.log(str4.toUpperCase());
console.log(str4.toLowerCase());

//another method
str4=str4.toUpperCase();
let str5=str4.toLowerCase();
console.log(str4);
console.log(str5);

let str6=str4.slice(0,5);//print all chard just before index 5
let str7=str4.slice(1);

console.log(str6);
console.log(str7);


let str8="This is String";
let age=11;
let str9=+"Thsi is String"
console.log(typeof(str8));
console.log(typeof(str9));
console.log(typeof(age));
let aboutme='$[str8] of age $[age]';
console.log(aboutme);
