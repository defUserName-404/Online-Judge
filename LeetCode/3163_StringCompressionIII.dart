class Solution {
  String compressedString(String word) {
    StringBuffer comp = StringBuffer();
    int n = word.length;
    int i = 0;
    while (i < n) {
      var c = word[i];
      int count = 0;
      while (i < n && word[i] == c && count < 9) {
        count++;
        i++;
      }
      comp.write('$count$c');
    }
    return comp.toString();
  }
}
