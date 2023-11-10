class Solution {

	public long findTheArrayConcVal(int[] nums) {
		long result = 0;
		int n = nums.length;

		for (int i = 0; i < (n + 1) / 2; i++) {
			int first = nums[i];
			int last = nums[nums.length - i - 1];

			if ((i == n / 2) && (n % 2 == 1)) {
				result += Long.parseLong(String.valueOf(first));
				break;
			}

			result += Long.parseLong(String.valueOf(first) + String.valueOf(last));
		}

		return result;
	}

}
