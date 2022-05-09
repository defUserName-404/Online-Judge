class Solution {

	public int pivotIndex(int[] nums) {
		int n = nums.length;
		int[] prefixSum = new int[n];
		int sum = 0;

		for (int i = 0; i < n; i++) {
			sum += nums[i];
			prefixSum[i] = sum;
		}

		for (int i = 0; i < n; i++) {
			int num = nums[i];
			int left = prefixSum[i] - num;
			int right = sum - left - num;

			if (left == right)
				return i;
		}

		return -1;
	}
}