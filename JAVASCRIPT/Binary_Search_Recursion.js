var arr=[2, 16, 23, 33, 41, 51, 73];
var x = 33;

function findElement(arr,x,low,high){
  var mid=low+high/2;
  if(low > high){
    return -1;
  }
  else{
    if(x==arr[mid]){
      return mid;
    }
    else if(x > arr[mid]){
      return findElement(arr,x,mid+1,high);
    }
    else{
      return findElement(arr,x,low,mid-1);
    }
  }
}

function searchElement(arr,x){
  const index = findElement(arr,x,0,arr.length-1);
  console.log(`${x} is found at index ${index}`);
}

searchElement(arr,x);
// 33 is found at index 3