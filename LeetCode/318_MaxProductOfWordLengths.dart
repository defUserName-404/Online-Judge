import 'dart:math';

class Solution {
  List<Map<int, int>> _letterCounts = [];

  void _mapLetterCounts(List<String> words) {
    for (String word in words) {
      Map<int, int> letterCount = {};
      for (int i = 0; i < word.length; i++) {
        letterCount[word.codeUnitAt(i)] =
            (letterCount[word.codeUnitAt(i)] ?? 0) + 1;
      }
      _letterCounts.add(letterCount);
    }
  }

  bool _doesBothWordIndexContainCommonLetters(
      {required int indexI, required int indexJ}) {
    for (int letter in _letterCounts[indexI].keys) {
      if (_letterCounts[indexJ].containsKey(letter)) {
        return true;
      }
    }
    return false;
  }

  int maxProduct(List<String> words) {
    int result = 0;
    _mapLetterCounts(words);
    for (int i = 0; i < _letterCounts.length; i++) {
      for (int j = i + 1; j < _letterCounts.length; j++) {
        if (!_doesBothWordIndexContainCommonLetters(indexI: i, indexJ: j)) {
          result = max(result, words[i].length * words[j].length);
        }
      }
    }
    return result;
  }
}
