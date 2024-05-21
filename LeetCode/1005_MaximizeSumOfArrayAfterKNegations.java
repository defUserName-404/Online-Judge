import java.util.Arrays;

class Solution {
	
	public int largestSumAfterKNegations(int[] nums, int k) {
		Arrays.sort(nums);
		for (int i = 0; k > 0 && i < nums.length && nums[i] < 0; i++, k--) {
			nums[i] = -nums[i];

		}
		return Arrays.stream(nums)
					 .sum() - (k % 2) * Arrays.stream(nums)
											  .min()
											  .orElse(0) * 2;
	}

}
