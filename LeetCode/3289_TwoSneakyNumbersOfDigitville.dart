class Solution {
  List<int> getSneakyNumbers(List<int> nums) {
    Map<int, int> count = {};
    for (int num in nums) {
      count[num] = (count[num] ?? 0) + 1;
    }
    return count.keys.where((key) => count[key]! > 1).toList();
  }
}
