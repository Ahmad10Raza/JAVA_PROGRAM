var arr = [2, 12, 34, 54, 41];

function arraySum(i,arr) {
  if (i >= arr.length) {
    return 0;
  }
  return arr[i] + arraySum(i+1,arr);
}

console.log(arraySum(0,arr));
// 143