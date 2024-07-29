import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

class Solution {

	public List<List<Integer>> combinationSum(int[] candidates, int target) {
		List<List<Integer>> result = new ArrayList<>();
		Arrays.sort(candidates);
		backtrack(result, new ArrayList<>(), candidates, target, 0);
		return result;
	}

	private void backtrack(List<List<Integer>> list, List<Integer> tempList, int[] nums, int remaining, int start) {
		if (remaining < 0) {
			return;
		}
		if (remaining == 0) {
			list.add(new ArrayList<>(tempList));
		} else {
			for (int i = start; i < nums.length; i++) {
				tempList.add(nums[i]);
				backtrack(list, tempList, nums, remaining - nums[i], i);
				tempList.removeLast();
			}
		}
	}

}
