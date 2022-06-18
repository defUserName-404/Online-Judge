class Solution {

	public int maxArea(int[] height) {
		int left = 0, right = height.length - 1;
		int maxWaterArea = 0;

		while (left < right) {
			int currentWaterArea = Math.min(height[left], height[right]) * (right - left);

			if (currentWaterArea > maxWaterArea)
				maxWaterArea = currentWaterArea;

			if (height[left] < height[right])
				left++;
			else
				right--;
		}

		return maxWaterArea;
	}
}