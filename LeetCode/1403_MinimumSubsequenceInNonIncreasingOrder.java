import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;

class Solution {

	public List<Integer> minSubsequence(int[] nums) {
		List<Integer> result = new ArrayList<>();
		int[] sortedNums = Arrays.stream(nums)
				.boxed()
				.sorted(Collections.reverseOrder())
				.mapToInt(Integer::intValue)
				.toArray();

		int totalSum = Arrays
				.stream(nums)
				.sum();
		int currentSum = 0;

		for (final int num : sortedNums) {
			result.add(num);
			currentSum += num;

			if (currentSum > totalSum - currentSum)
				return result;
		}

		return result;
	}
}