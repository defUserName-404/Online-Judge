class Solution {
  int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
  }

  List<String> simplifiedFractions(int n) {
    List<String> result = [];
    for (int denominator = 2; denominator <= n; denominator++) {
      for (int numerator = 1; numerator < denominator; numerator++) {
        if (gcd(numerator, denominator) == 1) {
          denominator = denominator;
          result.add("$numerator/$denominator");
        }
      }
    }
    return result;
  }
}
