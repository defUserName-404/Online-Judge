import 'dart:math';

class Solution {
  int getLastMoment(int n, List<int> left, List<int> right) {
    int ans = 0;
    for (int i = 0; i < left.length; i++) {
      ans = max(ans, left[i]);
    }
    for (int i = 0; i < right.length; i++) {
      ans = max(ans, n - right[i]);
    }
    return ans;
  }
}
