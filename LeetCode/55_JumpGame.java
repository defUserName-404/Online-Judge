class Solution {

	public boolean canJump(int[] nums) {
		int destindex = 0;
		for (int i = 0; i < nums.length; i++) {
			if (destindex < i) {
				return false;
			}
			destindex = Math.max(destindex, i + nums[i]);
		}
		return true;
	}

}
