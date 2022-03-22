import java.util.Arrays;

public class MaximumProductDifferenceBetweenTwoPairs_1913 {
	public int maxProductDifference(int[] nums) {
		Arrays.sort(nums);
		int n = nums.length;

		int firstTwo = nums[0] * nums[1];
		int lastTwo = nums[n - 1] * nums[n - 2];

		return lastTwo - firstTwo;
	}
}
