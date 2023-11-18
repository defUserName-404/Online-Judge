class Solution {

	public int maxRotateFunction(int[] nums) {
		int n = nums.length;
		int sum0 = 0, sum1 = 0;
		for (int i = 0; i < n; i++) {
			sum0 += nums[i];
			sum1 += nums[i] * i;
		}
		int max = sum1;
		for (int i = 1; i < n; i++) {
			sum1 += sum0 - n * nums[n - i];
			max = Math.max(max, sum1);
		}

		return max;
	}

}
