import java.util.Arrays;

class Solution {

	public int singleNumber(int[] nums) {
		long sum = Arrays.stream(nums)
				.asLongStream()
				.sum();
		for (int i = 0; i < nums.length; i++) {
			if ((sum - nums[i]) % 3 == 0)
				return nums[i];
		}

		return nums[0];
	}

}
