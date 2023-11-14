import java.util.Arrays;

class Solution {

	public int singleNumber(int[] nums) {
		long sum = Arrays
			.stream(nums)
			.asLongStream()
			.sum();
		for (int num : nums) {
			if ((sum - num) % 3 == 0) {
				return num;
			}
		}

		return nums[0];
	}

}
