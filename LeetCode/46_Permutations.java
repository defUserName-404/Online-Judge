import java.util.ArrayList;
import java.util.List;

class Solution {

	public List<List<Integer>> permute(int[] nums) {
		List<List<Integer>> list = new ArrayList<>();
		backtrack(list, new ArrayList<>(), nums);
		return list;
	}

	private void backtrack(List<List<Integer>> list, List<Integer> tempList, int[] nums) {
		if (tempList.size() == nums.length) {
			list.add(new ArrayList<>(tempList));
		} else {
			for (int num : nums) {
				if (tempList.contains(num)) {
					continue;
				}
				tempList.add(num);
				backtrack(list, tempList, nums);
				tempList.removeLast();
			}
		}
	}

}
