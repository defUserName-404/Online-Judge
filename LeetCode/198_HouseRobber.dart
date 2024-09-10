import 'dart:math';

class Solution {
  int rob(List<int> nums) {
    if (nums.isEmpty) return 0;
    if (nums.length == 1) return nums[0];
    int prev2 = 0, prev1 = 0;
    for (int num in nums) {
      int temp = max(prev1, prev2 + num);
      prev2 = prev1;
      prev1 = temp;
    }

    return prev1;
  }
}
