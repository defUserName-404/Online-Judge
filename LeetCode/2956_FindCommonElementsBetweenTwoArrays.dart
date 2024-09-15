class Solution {
  List<int> findIntersectionValues(List<int> nums1, List<int> nums2) {
    Set<int> numSet1 = Set.from(nums1), numSet2 = Set.from(nums2);
    int count1 = 0, count2 = 0;
    for (int num in nums1) {
      if (numSet2.contains(num)) {
        count1++;
      }
    }
    for (int num in nums2) {
      if (numSet1.contains(num)) {
        count2++;
      }
    }
    return [count1, count2];
  }
}
