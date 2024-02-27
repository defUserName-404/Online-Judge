import java.util.HashMap;
import java.util.Map;
import java.util.Stack;

class Solution {

	public int[] nextGreaterElement(int[] nums1, int[] nums2) {
		Map<Integer, Integer> nextLargerElement = new HashMap<>();
		int[] result = new int[nums1.length];
		Stack<Integer> numsStack = new Stack<>();

		for (int num : nums2) {
			while (!numsStack.isEmpty() && num > numsStack.peek()) {
				int foundLargerNum = numsStack.pop();
				nextLargerElement.put(foundLargerNum, num);
			}
			numsStack.push(num);
		}

		for (int i = 0; i < nums1.length; i++) {
			result[i] = nextLargerElement.getOrDefault(nums1[i], -1);
		}

		return result;
	}

}
