function findDup(arr) {
    var arrDup=[]
    for(var i=0; i<arr.length; i++){
       if(arr.indexOf(arr[i])!=i&&arrDup.indexOf(arr[i])==-1){
         arrDup.push(arr[i]);
       }
    }
    return arrDup;
  }
  var arr = [4,2,34,4,1,12,1,4];
  
  console.log(findDup(arr)); //[4, 1]