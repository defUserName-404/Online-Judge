import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;

class Solution {

	// Approach 1
	public boolean divideArray1(int[] nums) {
		Map<Integer, Integer> occurranceCountMap = new HashMap<>();

		for (final int num : nums) {
			if (!occurranceCountMap.containsKey(num))
				occurranceCountMap.put(num, 1);
			else
				occurranceCountMap.put(num, occurranceCountMap.get(num) + 1);
		}

		for (final int key : occurranceCountMap.keySet()) {
			if (occurranceCountMap.get(key) % 2 == 1)
				return false;
		}

		return true;
	}

	// Approach 2
	public boolean divideArray2(int[] nums) {
		Set<Integer> seen = new HashSet<>();

		for (final int num : nums)
			if (!seen.add(num))
				seen.remove(num);

		return seen.isEmpty();
	}

}
