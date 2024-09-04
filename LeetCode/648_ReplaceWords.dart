class Solution {
  String replaceWords(List<String> dictionary, String sentence) {
    dictionary.sort();
    return sentence
        .split(' ')
        .map((word) => dictionary.firstWhere(
            (dictWord) => word.startsWith(dictWord),
            orElse: () => word))
        .join(' ');
  }
}
