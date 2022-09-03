import java.util.HashMap;
import java.util.Map;

class Solution {

	public int repeatedNTimes(int[] nums) {
		Map<Integer, Integer> occurranceMap = new HashMap<>();

		for (final int num : nums) {
			if (occurranceMap.containsKey(num))
				return num;

			occurranceMap.put(num, 1);
		}

		return 0;
	}
}