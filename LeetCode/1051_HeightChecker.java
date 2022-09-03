import java.util.Arrays;;

class Solution {

	public int heightChecker(int[] heights) {
		int[] sortedHeights = heights.clone();
		Arrays.sort(sortedHeights);
		int count = 0;

		for (int i = 0; i < heights.length; i++)
			if (sortedHeights[i] != heights[i])
				count++;

		return count;
	}
}