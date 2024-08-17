class Solution {

	/*
	 * Using map
	 */
//	public int maxFrequencyElements(int[] nums) {
//		int maxFrequency = 0;
//		var countMap = new HashMap<Integer, Integer>();
//		for (int num : nums) {
//			int currentFrequency = countMap.getOrDefault(num, 0) + 1;
//			countMap.put(num, currentFrequency);
//			maxFrequency = Math.max(maxFrequency, currentFrequency);
//		}
//		final int finalMaxFrequency = maxFrequency;
//		return (int) countMap.values()
//							 .stream()
//							 .filter(value -> value == finalMaxFrequency)
//							 .count() * maxFrequency;
//	}

	/*
	 * Using array
	 */
	public int maxFrequencyElements(int[] nums) {
		int maxFrequency = 0;
		var frequencyMap = new int[101];
		for (int num : nums) {
			int currentFrequency = ++frequencyMap[num];
			maxFrequency = Math.max(maxFrequency, currentFrequency);
		}
		int count = 0;
		for (int frequency : frequencyMap) {
			if (frequency == maxFrequency) {
				count++;
			}
		}
		return count * maxFrequency;
	}

}
