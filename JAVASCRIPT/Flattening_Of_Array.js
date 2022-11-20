var arr = [2,[3,12,24],17,[54,[24,3],8]];
var result=[];

function Flatten_Array(arr,i){
  if(i>=arr.length){
    return;
  }
  if(Array.isArray(arr[i])){
    Flatten_Array(arr[i],0);
  }
  else{
    result.push(arr[i]);
  }
  Flatten_Array(arr,i+1);
}

Flatten_Array(arr,0);

console.log(result);
// [2, 3, 12, 24, 17, 54, 24, 3, 8]