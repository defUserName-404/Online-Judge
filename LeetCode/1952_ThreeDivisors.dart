import 'dart:math';

class Solution {
  bool isThree(int n) {
    int count = 0;
    for (int i = 1; i <= sqrt(n); i++) {
      if (n % i == 0) {
        count += i == sqrt(n) ? 1 : 2;
      }
    }
    return count == 3;
  }
}
