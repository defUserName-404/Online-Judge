import java.util.Arrays;

class Solution {

    public int matrixSum(int[][] nums) {
		int score = 0;
		for (final int[] row : nums)
			Arrays.sort(row);
		for (int j = 0; j < nums[0].length; j++) {
			int current = 0;
			for (int i = 0; i < nums.length; i++) {
				current = Math.max(current, nums[i][j]);
			}
			score += current;
		}
		return score;
    }

}
