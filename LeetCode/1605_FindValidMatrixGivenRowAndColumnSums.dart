import 'dart:math';

class Solution {
  List<List<int>> restoreMatrix(List<int> rowSum, List<int> colSum) {
    List<List<int>> matrix =
        List.generate(rowSum.length, (_) => List.filled(colSum.length, 0));
    for (int i = 0; i < rowSum.length; i++) {
      for (int j = 0; j < colSum.length; j++) {
        matrix[i][j] = min(rowSum[i], colSum[j]);
        rowSum[i] -= matrix[i][j];
        colSum[j] -= matrix[i][j];
      }
    }
    return matrix;
  }
}
