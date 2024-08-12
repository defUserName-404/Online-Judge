import java.util.Arrays;
import java.util.HashMap;

class Solution {

	public int[] frequencySort(int[] nums) {
		var frequencyMap = new HashMap<Integer, Integer>();
		Arrays.stream(nums)
			  .forEach(num -> frequencyMap.put(num, frequencyMap.getOrDefault(num, 0) + 1));
		return Arrays.stream(nums)
					 .boxed()
					 .sorted((a, b) -> !frequencyMap.get(a)
													.equals(frequencyMap.get(b)) ?
							 frequencyMap.get(a) - frequencyMap.get(b) : b - a)
					 .mapToInt(num -> num)
					 .toArray();
	}

}
