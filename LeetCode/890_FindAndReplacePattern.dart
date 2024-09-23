class Solution {
  List<String> findAndReplacePattern(List<String> words, String pattern) {
    List<String> result = [];
    for (String word in words) {
      if (_isMatch(word, pattern)) {
        result.add(word);
      }
    }
    return result;
  }

  bool _isMatch(String word, String pattern) {
    if (word.length != pattern.length) return false;
    Map<String, String> mapping = {};
    Map<String, String> reverseMapping = {};
    for (int i = 0; i < word.length; i++) {
      String w = word[i];
      String p = pattern[i];
      if ((mapping.containsKey(w) && mapping[w] != p) ||
          (reverseMapping.containsKey(p) && reverseMapping[p] != w)) {
        return false;
      }
      mapping[w] = p;
      reverseMapping[p] = w;
    }
    return true;
  }
}
