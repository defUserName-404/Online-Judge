class Solution {

	public int diagonalSum(int[][] matrix) {
		int sum = 0;
		int n = matrix.length;

		for (int i = 0; i < n; i++) {
			int j1 = i;
			int j2 = n - i - 1;

			// if it's the same column
			if (j1 == j2) {
				sum += matrix[i][j1];
				continue;
			}

			sum += (matrix[i][j1] + matrix[i][j2]);
		}

		return sum;
	}
}