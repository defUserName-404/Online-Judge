import 'dart:math';

class Solution {
  List<int> partitionLabels(String s) {
    List<int> result = [];
    Map<String, int> map = {};
    for (int i = 0; i < s.length; i++) {
      map[s[i]] = i;
    }
    int start = 0;
    int end = 0;
    for (int i = 0; i < s.length; i++) {
      end = max(end, map[s[i]]!);
      if (i == end) {
        result.add(end - start + 1);
        start = i + 1;
      }
    }
    return result;
  }
}
