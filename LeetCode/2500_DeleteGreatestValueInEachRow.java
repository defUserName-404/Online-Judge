import java.util.Arrays;

class Solution {

	public int deleteGreatestValue(int[][] grid) {
		int result = 0;
		int m = grid.length;
		int n = grid[0].length;

		for (int[] value : grid) {
			Arrays.sort(value);
		}

		for (int i = 0; i < n; i++) {
			int currentMax = 0;

			for (int[] ints : grid) {
				currentMax = Math.max(currentMax, ints[i]);
			}

			result += currentMax;
		}

		return result;
	}

}
