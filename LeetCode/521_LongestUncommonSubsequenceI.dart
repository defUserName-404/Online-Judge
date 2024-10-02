import 'dart:math';

class Solution {
  int findLUSlength(String a, String b) {
    return a == b ? -1 : max(a.length, b.length);
  }
}
