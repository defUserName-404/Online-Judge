class Solution {
  List<String> _ones = [
    "",
    "One",
    "Two",
    "Three",
    "Four",
    "Five",
    "Six",
    "Seven",
    "Eight",
    "Nine",
    "Ten",
    "Eleven",
    "Twelve",
    "Thirteen",
    "Fourteen",
    "Fifteen",
    "Sixteen",
    "Seventeen",
    "Eighteen",
    "Nineteen"
  ];

  List<String> _tens = [
    "",
    "Ten",
    "Twenty",
    "Thirty",
    "Forty",
    "Fifty",
    "Sixty",
    "Seventy",
    "Eighty",
    "Ninety"
  ];

  List<String> _scales = ["", "Thousand", "Million", "Billion"];

  String _convertTwoDigits(int n) {
    if (n == 0) {
      return "";
    }
    if (n < 20) {
      return _ones[n];
    }
    int tenDigit = n ~/ 10;
    int remainder = n % 10;
    String tenStr = _tens[tenDigit];
    String remStr = _ones[remainder];
    if (remStr.isEmpty) {
      return tenStr;
    } else {
      return "$tenStr $remStr";
    }
  }

  String _convertThreeDigits(int n) {
    if (n == 0) {
      return "";
    }
    int hundredDigit = n ~/ 100;
    int remainder = n % 100;
    List<String> parts = [];
    if (hundredDigit > 0) {
      parts.add("${_ones[hundredDigit]} Hundred");
    }
    String twoDigits = _convertTwoDigits(remainder);
    if (twoDigits.isNotEmpty) {
      parts.add(twoDigits);
    }
    return parts.join(" ");
  }

  String numberToWords(int num) {
    if (num == 0) {
      return "Zero";
    }
    List<int> groups = [];
    while (num > 0) {
      groups.add(num % 1000);
      num = num ~/ 1000;
    }
    List<int> reversedGroups = groups.reversed.toList();
    List<String> result = [];
    for (int i = 0; i < reversedGroups.length; i++) {
      int originalIndex = reversedGroups.length - 1 - i;
      int group = reversedGroups[i];
      String groupStr = _convertThreeDigits(group);
      if (groupStr.isNotEmpty) {
        if (originalIndex < _scales.length) {
          String scale = _scales[originalIndex];
          if (scale.isNotEmpty) {
            groupStr += " $scale";
          }
        }
        result.add(groupStr);
      }
    }
    return result.join(" ");
  }
}
