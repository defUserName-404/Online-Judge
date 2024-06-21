class Solution {

	public int minSubArrayLen(int target, int[] nums) {
		int globalMin = Integer.MAX_VALUE;
		int left = 0;
		int sum = 0;
		for (int right = 0; right < nums.length; right++) {
			sum += nums[right];
			while (sum >= target) {
				globalMin = Math.min(globalMin, right - left + 1);
				sum -= nums[left++];
			}
		}
		if (globalMin == Integer.MAX_VALUE) {
			globalMin = 0;
		}
		return globalMin;
	}

}
