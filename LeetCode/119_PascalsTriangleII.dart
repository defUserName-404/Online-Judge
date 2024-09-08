class Solution {
  List<int> getRow(int rowIndex) {
    List<int> result = [1];
    for (int i = 1; i <= rowIndex; i++) {
      result.add(result[i - 1] * (rowIndex - i + 1) ~/ i);
    }
    return result;
  }
}
