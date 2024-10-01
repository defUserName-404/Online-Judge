class Solution {
  int compress(List<String> chars) {
    int i = 0;
    int j = 0;
    while (i < chars.length) {
      int count = 1;
      while (i < chars.length - 1 && chars[i] == chars[i + 1]) {
        count++;
        i++;
      }
      chars[j] = chars[i];
      j++;
      if (count > 1) {
        String countStr = count.toString();
        for (int k = 0; k < countStr.length; k++) {
          chars[j] = countStr[k];
          j++;
        }
      }
      i++;
    }
    return j;
  }
}
