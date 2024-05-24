import java.util.PriorityQueue;

class Solution {

	/*
	 * Solution 1
	 */
//	public int largestSumAfterKNegations(int[] nums, int k) {
//		Arrays.sort(nums);
//		for (int i = 0; k > 0 && i < nums.length && nums[i] < 0; i++, k--) {
//			nums[i] = -nums[i];
//
//		}
//		return Arrays.stream(nums)
//					 .sum() - (k % 2) * Arrays.stream(nums)
//											  .min()
//											  .orElse(0) * 2;
//	}

	/*
	 * Solution 2
	 */
	public int largestSumAfterKNegations(int[] nums, int k) {
		PriorityQueue<Integer> minHeap = new PriorityQueue<>();
		int sum = 0;
		for (int num : nums) {
			minHeap.add(num);
			sum += num;
		}
		while (k != 0) {
			int num = minHeap.remove();
			sum -= num * 2;
			minHeap.add(-num);
			k--;
		}
		return sum;
	}

}
