class Solution {
  String findDifferentBinaryString(List<String> nums) {
    String result = '';
    for (int i = 0; i < nums[0].length; i++) {
      result += nums[i][i] == '0' ? '1' : '0';
    }
    return result;
  }
}
