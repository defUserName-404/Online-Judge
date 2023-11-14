import java.util.Arrays;

class Solution {

	public int[] leftRigthDifference(int[] nums) {
		int leftSum = 0, rightSum = Arrays
			.stream(nums)
			.sum();
		int[] answer = new int[nums.length];

		for (int i = 0; i < answer.length; i++) {
			rightSum -= nums[i];
			answer[i] = Math.abs(rightSum - leftSum);
			leftSum += nums[i];
		}

		return answer;
	}

}
