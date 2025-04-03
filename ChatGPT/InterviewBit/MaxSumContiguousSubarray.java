import java.util.List;

public class Solution {
	// DO NOT MODIFY THE LIST. IT IS READ ONLY
	public int maxSubArray(final List<Integer> array) {
		int maxSum = array.get(0);
		int currentSum = array.get(0);
		for (int i = 1; i < array.size(); i++) {
			currentSum = Math.max(currentSum + array.get(i), array.get(i));
			maxSum = Math.max(currentSum, maxSum);
		}
		return maxSum;
	}
}
