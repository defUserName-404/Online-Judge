class Solution {

	public int minStartValue(int[] nums) {
		int currentSum = 0,
			min = 0;

		for (final int num : nums) {
			currentSum += num;

			if (currentSum < min) {
				min = currentSum;
			}
		}

		return Math.abs(min) + 1;
	}

}
