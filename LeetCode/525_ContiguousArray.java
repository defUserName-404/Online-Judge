import java.util.HashMap;
import java.util.Map;

class Solution {

	public int findMaxLength(int[] nums) {
		Map<Integer, Integer> map = new HashMap<>();
		map.put(0, -1);
		int prefixSum = 0, result = 0;
		for (int i = 0; i < nums.length; i++) {
			prefixSum += nums[i] == 0 ? -1 : 1;
			if (map.containsKey(prefixSum)) {
				result = Math.max(result, i - map.get(prefixSum));
			} else {
				map.put(prefixSum, i);
			}
		}
		return result;
	}

}
