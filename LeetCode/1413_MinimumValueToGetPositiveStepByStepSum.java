class Solution {

	public int minStartValue(int[] nums) {
		int n = nums.length;
		int[] prefixSum = new int[n];
		int startValue = 1;
		int min = Integer.MAX_VALUE;

		for (int i = 0; i < n; i++) {
			int num = nums[i];

			if (i == 0)
				prefixSum[i] = num;
			else
				prefixSum[i] = prefixSum[i - 1] + num;

			int prefix = prefixSum[i];

			if (prefix < min) {
				min = prefix;

				if (prefix < 0)
					startValue = Math.abs(min) + 1;
			}

		}

		return startValue;
	}
}