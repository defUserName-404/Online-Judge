import 'dart:math';

class Solution {
  int leastInterval(List<String> tasks, int n) {
    List<int> counts = List.filled(26, 0);
    for (String task in tasks) {
      counts[task.codeUnitAt(0) - 'A'.codeUnitAt(0)]++;
    }
    counts.sort((a, b) => b - a);
    int maxCount = counts[0];
    int maxCountCount = 0;
    for (int i = 0; i < 26; i++) {
      if (counts[i] == maxCount) {
        maxCountCount++;
      } else {
        break;
      }
    }
    return max((maxCount - 1) * (n + 1) + maxCountCount, tasks.length);
  }
}
