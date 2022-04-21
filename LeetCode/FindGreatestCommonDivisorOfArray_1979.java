public class FindGreatestCommonDivisorOfArray_1979 {
	private int gcd(int a, int b) {
		return ((b == 0) ? a : gcd(b, a % b));
	}

	public int findGCD(int[] nums) {
		int lowest = nums[0];
		int highest = nums[0];

		for (int x : nums) {
			if (x < lowest)
				lowest = x;
			else if (x > highest)
				highest = x;
		}

		return gcd(lowest, highest);
	}
}