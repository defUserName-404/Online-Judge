import 'dart:math';

class Solution {
  late Random _random;
  Map<int, List<int>> _map = {};

  Solution(List<int> nums) {
    this._random = Random();
    for (int i = 0; i < nums.length; i++) {
      if (_map.containsKey(nums[i])) {
        _map[nums[i]]!.add(i);
      } else {
        _map[nums[i]] = [i];
      }
    }
  }

  int pick(int target) {
    List<int> indices = _map[target]!;
    return indices[_random.nextInt(indices.length)];
  }
}

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = Solution(nums);
 * int param1 = obj.pick(target);
 */
