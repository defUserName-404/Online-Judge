import java.util.Arrays;
import java.util.Collections;

class Solution {

	public int maxScore(int[] nums) {
		long prefixSum = 0;
		int[] arrDesc = Arrays.stream(nums)
				.boxed()
				.sorted(Collections.reverseOrder())
				.mapToInt(Integer::intValue)
				.toArray();
		for (int i = 0; i < arrDesc.length; i++) {
			prefixSum += (long)arrDesc[i];
			if (prefixSum <= 0)
				return i;
		}

		return nums.length;
	}

}
