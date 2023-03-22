import java.util.ArrayList;
import java.util.List;

class Solution {

	public List<Boolean> checkArithmeticSubarrays(int[] nums, int[] l, int[] r) {
		List<Boolean> result = new ArrayList<>();

		for (int i = 0; i < l.length; i++) {
			int left = l[i];
			int right = r[i];
			boolean canBeAdded = true;

			for (int j = left; j < right - 1; j++) {
				if (Math.abs(nums[j] - nums[j + 1]) != 0) {
					canBeAdded = false;
					break;
				}
			}
			result.add(canBeAdded);
		}

		return result;
	}

}
