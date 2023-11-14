class Solution {

	public int trap(int[] heights) {
		int left = 0;
		int right = heights.length - 1;
		int maxLeft = 0;
		int maxRight = 0;
		int waterVolume = 0;

		while (left <= right) {
			if (heights[left] <= heights[right]) {
				if (heights[left] > maxLeft) {
					maxLeft = heights[left];
				} else {
					waterVolume += maxLeft - heights[left];
				}
				left++;
			} else {
				if (heights[right] > maxRight) {
					maxRight = heights[right];
				} else {
					waterVolume += maxRight - heights[right];
				}
				right--;
			}
		}

		return waterVolume;
	}

}
