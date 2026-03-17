// naive two pass
// time complexity: O(2*n) = O(n)
// space complexity: O(1)
// function dominantIndex(nums: number[]): number {
//   let max: number = -Infinity;
//   let maxIndex: number = -1;
//   for (let i = 0; i < nums.length; i++) {
//     const num = nums[i];
//     if (num > max) {
//       max = num;
//       maxIndex = i;
//     }
//   }
//   for (const num of nums) {
//     if (num === max) continue;
//     if (num * 2 > max) return -1;
//   }
//   return maxIndex;
// }

// optimization: keep track of the second max in order to calculate it in one pass
function dominantIndex(nums: number[]): number {
  let firstMax: number = -1, secondMax: number = 1;
  let maxIndex: number = -1;
  for (let i = 0; i < nums.length; i++) {
    const num = nums[i];
    if (num > firstMax) {
      secondMax = firstMax;
      firstMax = num;
      maxIndex = i;
    } else if (num > secondMax) {
      secondMax = num;
    }
  }
  return (firstMax >= secondMax * 2) ? maxIndex : -1;
}