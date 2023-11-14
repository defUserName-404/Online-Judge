class Solution {

	public int[] productExceptSelf(int[] nums) {
		int mul = 1;
		int numberOfZeros = 0;
		int[] ans = new int[nums.length];

		for (final int num : nums) {
			if (num == 0) {
				numberOfZeros++;
				continue;
			}

			mul *= num;
		}

		if (numberOfZeros < 1) {
			for (int i = 0; i < nums.length; i++) {
				ans[i] = mul / nums[i];
			}
		}

		else if (numberOfZeros == 1) {
			for (int i = 0; i < nums.length; i++) {
				ans[i] = nums[i] == 0 ? mul : 0;
			}
		}

		return ans;
	}

}
