class Solution {

	public int[] getSumAbsoluteDifferences(int[] nums) {
		int n = nums.length;
		int[] prefixSum = new int[n],
				result = new int[n];
		prefixSum[0] = nums[0];
		for (int i = 1; i < n; i++)
			prefixSum[i] = prefixSum[i - 1] + nums[i];

		int maxSum = prefixSum[n - 1];

		for (int i = 0; i < n; i++) {
			result[i] = nums[i] * (2 * i - n + 1) + maxSum - prefixSum[i];

			if (i != 0)
				result[i] -= prefixSum[i - 1];
		}

		return result;
	}
}