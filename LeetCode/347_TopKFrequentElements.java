import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;
import java.util.PriorityQueue;

class Solution {

	public int[] topKFrequent(int[] nums, int k) {
		Map<Integer, Integer> count = new HashMap<>();
		Arrays.stream(nums)
			.forEach(num -> count.put(num, count.getOrDefault(num, 0) + 1));
		PriorityQueue<Integer> priorityQueue = new PriorityQueue<>(
			(a, b) -> count.get(b) - count.get(a));
		priorityQueue.addAll(count.keySet());
		int[] ans = new int[k];
		for (int i = 0; i < k; i++) {
			ans[i] = priorityQueue.poll();
		}

		return ans;
	}

}
