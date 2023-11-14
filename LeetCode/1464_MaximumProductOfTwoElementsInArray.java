class Solution {

	public int maxProduct(int[] nums) {
		int maxValue, secondMaxValue;
		maxValue = secondMaxValue = Integer.MIN_VALUE;

		for (final int num : nums) {
			if (num > maxValue) {
				secondMaxValue = maxValue;
				maxValue = num;
			}

			else if (num > secondMaxValue) {
				secondMaxValue = num;
			}
		}

		return (maxValue - 1) * (secondMaxValue - 1);
	}

}
