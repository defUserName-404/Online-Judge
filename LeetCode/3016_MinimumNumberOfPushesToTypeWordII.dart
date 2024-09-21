class Solution {
  int minimumPushes(String word) {
    List<int> letterFrequency = List.filled(26, 0);
    for (int i = 0; i < word.length; i++) {
      letterFrequency[word.codeUnitAt(i) - 'a'.codeUnitAt(0)]++;
    }
    letterFrequency.sort((a, b) => b - a);
    int push = 1, result = 0;
    for (int i = 0; i < 26 && letterFrequency[i] != 0; i++) {
      if (i >= 8 && i % 8 == 0) push++;
      result += letterFrequency[i] * push;
    }
    return result;
  }
}
