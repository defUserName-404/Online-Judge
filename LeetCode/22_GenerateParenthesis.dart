class Solution {
  List<String> _generator(
      {int left = 0,
      int right = 0,
      required int num,
      String string = "",
      List<String>? result}) {
    result ??= [];
    if (left == num && right == num) {
      result.add(string);
      return result;
    }
    if (left < num) {
      _generator(
          left: left + 1,
          right: right,
          num: num,
          string: string + '(',
          result: result);
    }
    if (right < left) {
      _generator(
          left: left,
          right: right + 1,
          num: num,
          string: string + ')',
          result: result);
    }
    return result;
  }

  List<String> generateParenthesis(int n) {
    if (n < 1 || n > 8) throw new ArgumentError("n must be between 1 and 8");
    return _generator(num: n);
  }
}
