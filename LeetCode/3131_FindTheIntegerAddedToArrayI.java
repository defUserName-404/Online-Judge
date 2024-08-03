import java.util.Arrays;

class Solution {

	public int addedInteger(int[] nums1, int[] nums2) {
		int minimumInArray1 = Arrays.stream(nums1)
									.min()
									.orElse(0);
		int minimumInArray2 = Arrays.stream(nums2)
									.min()
									.orElse(0);
		return minimumInArray2 - minimumInArray1;
	}

}
