function findProd(arr1, arr2) {
    var arrProd = arr1.length>arr2.length ? arr1 : arr2;
    for(var i=0; i < Math.min(arr1.length, arr2.length); i++){
       arrProd[i] = arr1[i] * arr2[i]; //Product of 2 array elements
    }
    return arrProd;
  }
  var arr1 = [3,45,23,78,34];
  var arr2 = [4,2,34,4,12,1,69];
  
  console.log(findProd(arr1,arr2)); //[12, 90, 782, 312, 408, 1]