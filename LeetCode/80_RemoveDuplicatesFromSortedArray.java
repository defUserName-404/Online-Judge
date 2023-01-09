class Solution {

	public int removeDuplicates(int[] nums) {
		int slowPtr = 0;
		int count = 1;

		for (int fastPtr = 1; fastPtr < nums.length; fastPtr++) {
			count = (nums[fastPtr] == nums[fastPtr - 1]) ? count + 1 : 1;

			if (count <= 2) {
				slowPtr++;
				nums[slowPtr] = nums[fastPtr];
			}
		}

		return slowPtr + 1;
	}

}
