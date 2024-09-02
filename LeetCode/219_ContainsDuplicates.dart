class Solution {
  bool containsNearbyDuplicate(List<int> nums, int k) {
    Map<int, int> numsIndices = {};
    for (int i = 0; i < nums.length; i++) {
      if ((numsIndices.containsKey(nums[i])) &&
          (i - numsIndices[nums[i]]! <= k)) {
        return true;
      }
      numsIndices[nums[i]] = i;
    }
    return false;
  }
}
