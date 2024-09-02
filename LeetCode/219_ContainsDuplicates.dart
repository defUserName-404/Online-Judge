class Solution {
  bool containsNearbyDuplicate(List<int> nums, int k) {
    Map<int, int> numsIndices = {};
    for (int i = 0; i < nums.length; i++) {
      if (numsIndices.containsKey(nums[i])) {
        if (i - numsIndices[nums[i]]! <= k) {
          return true;
        } else {
          numsIndices[nums[i]] = i;
        }
      } else {
        numsIndices[nums[i]] = i;
      }
    }
    return false;
  }
}
