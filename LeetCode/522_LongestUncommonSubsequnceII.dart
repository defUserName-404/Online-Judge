class Solution {
  int findLUSlength(List<String> strs) {
    strs.sort((a, b) => b.length.compareTo(a.length));
    for (int i = 0; i < strs.length; i++) {
      if (_isUniqueSubsequence(strs, i)) {
        return strs[i].length;
      }
    }
    return -1;
  }

  bool _isUniqueSubsequence(List<String> strs, int index) {
    for (int j = 0; j < strs.length; j++) {
      if (j != index && _isSubsequence(strs[index], strs[j])) {
        return false;
      }
    }
    return true;
  }

  bool _isSubsequence(String a, String b) {
    int i = 0, j = 0;
    while (i < a.length && j < b.length) {
      if (a[i] == b[j]) {
        i++;
      }
      j++;
    }
    return i == a.length;
  }
}
