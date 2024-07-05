import java.util.ArrayList;
import java.util.List;

class Solution {

	public int[] pivotArray(int[] nums, int pivot) {
		int n = nums.length;
		int[] rearrangedNums = new int[n];
		List<Integer> smallerNums = new ArrayList<>();
		List<Integer> greaterNums = new ArrayList<>();
		int totalPivots = 0;
		int index = 0;
		for (final int num : nums) {
			if (num < pivot) {
				smallerNums.add(num);
			} else if (num > pivot) {
				greaterNums.add(num);
			} else {
				totalPivots++;
			}
		}
		for (final int num : smallerNums) {
			rearrangedNums[index++] = num;
		}
		while (totalPivots-- != 0) {
			rearrangedNums[index++] = pivot;
		}
		for (final int num : greaterNums) {
			rearrangedNums[index++] = num;
		}
		return rearrangedNums;
	}

}
