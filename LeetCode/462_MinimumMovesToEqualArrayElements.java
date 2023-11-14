import java.util.Arrays;

class Solution {

	public int minMoves2(int[] nums) {
		int n = nums.length;
		Arrays.sort(nums);
		int median = nums[n / 2];
		int result = 0;

		for (final int num : nums) {
			result += Math.abs(median - num);
		}

		return result;
	}

}
