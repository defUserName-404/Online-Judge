class Solution {
  String complexNumberMultiply(String num1, String num2) {
    List<String> num1Parts = num1.split('+');
    List<String> num2Parts = num2.split('+');
    int real = int.parse(num1Parts[0]) * int.parse(num2Parts[0]) -
        int.parse(num1Parts[1].split('i')[0]) *
            int.parse(num2Parts[1].split('i')[0]);
    int imaginary =
        int.parse(num1Parts[0]) * int.parse(num2Parts[1].split('i')[0]) +
            int.parse(num1Parts[1].split('i')[0]) * int.parse(num2Parts[0]);
    return '$real+${imaginary}i';
  }
}
