class Solution {
  String findLongestWord(String s, List<String> dictionary) {
    dictionary.sort((a, b) {
      if (a.length != b.length) {
        return b.length.compareTo(a.length);
      }
      return a.compareTo(b);
    });
    for (String word in dictionary) {
      if (_isSubsequence(word, s)) {
        return word;
      }
    }
    return "";
  }

  bool _isSubsequence(String word, String s) {
    int i = 0, j = 0;
    while (i < word.length && j < s.length) {
      if (word[i] == s[j]) {
        i++;
      }
      j++;
    }
    return i == word.length;
  }
}
