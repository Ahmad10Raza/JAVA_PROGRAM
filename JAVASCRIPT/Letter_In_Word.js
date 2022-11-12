var str="Suggesting";
var count=new Array(26);
str=str.toLowerCase();
for(var i=0; i<str.length; i++){
   if(count[str.charCodeAt(i)-97]){
     count[str.charCodeAt(i)-97]++; // Increment count
   }
   else{
     count[str.charCodeAt(i)-97]=1; // Add entry
   }  
}
for(var i=0;i<26;i++){
  if(count[i]){
    console.log(`Character ${i+' a'} has occured ${count[i]} number of times`);
    }
}