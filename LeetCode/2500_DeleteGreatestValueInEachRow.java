import java.util.Arrays;

class Solution {

	public int deleteGreatestValue(int[][] grid) {
		int result = 0;
		int m = grid.length;
		int n = grid[0].length;

		for (int i = 0; i < m; i++)
			Arrays.sort(grid[i]);

		for (int i = 0; i < n; i++) {
			int currentMax = 0;

			for (int j = 0; j < m; j++)
				currentMax = Math.max(currentMax, grid[j][i]);

			result += currentMax;
		}

		return result;
	}
}