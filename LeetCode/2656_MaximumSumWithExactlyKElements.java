import java.util.Arrays;

class Solution {

	public int maximizeSum(int[] nums, int k) {
		int maximumNumber = Arrays.stream(nums)
								  .max()
								  .orElse(0);
		return (maximumNumber * k) + ((k * (k - 1)) / 2);
	}

}
