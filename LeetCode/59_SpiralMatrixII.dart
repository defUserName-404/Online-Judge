class Solution {
  List<List<int>> generateMatrix(int n) {
    List<List<int>> matrix = List.generate(n, (_) => List.filled(n, 0));
    int num = 1, left = 0, right = n - 1, top = 0, bottom = n - 1;
    while (left <= right && top <= bottom) {
      num = _fillTopRow(matrix, top++, left, right, num);
      num = _fillRightColumn(matrix, right--, top, bottom, num);
      if (top <= bottom)
        num = _fillBottomRow(matrix, bottom--, right, left, num);
      if (left <= right)
        num = _fillLeftColumn(matrix, left++, bottom, top, num);
    }
    return matrix;
  }

  int _fillTopRow(
      List<List<int>> matrix, int row, int left, int right, int num) {
    for (int i = left; i <= right; i++) {
      matrix[row][i] = num++;
    }
    return num;
  }

  int _fillRightColumn(
      List<List<int>> matrix, int col, int top, int bottom, int num) {
    for (int i = top; i <= bottom; i++) {
      matrix[i][col] = num++;
    }
    return num;
  }

  int _fillBottomRow(
      List<List<int>> matrix, int row, int right, int left, int num) {
    for (int i = right; i >= left; i--) {
      matrix[row][i] = num++;
    }
    return num;
  }

  int _fillLeftColumn(
      List<List<int>> matrix, int col, int bottom, int top, int num) {
    for (int i = bottom; i >= top; i--) {
      matrix[i][col] = num++;
    }
    return num;
  }
}
