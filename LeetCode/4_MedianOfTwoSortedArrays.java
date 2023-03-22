class Solution {

	public double findMedianSortedArrays(int[] nums1, int[] nums2) {
		int n1 = nums1.length;
		int n2 = nums2.length;
		if (n1 > n2)
			return findMedianSortedArrays(nums2, nums1);
		int low = 0, high = n1;
		while (low <= high) {
			int partition1 = (low + high) / 2;
			int partition2 = (n1 + n2 + 1) / 2 - partition1;
			int maxLeft1 = (partition1 == 0) ? Integer.MIN_VALUE : nums1[partition1 - 1];
			int minRight1 = (partition1 == n1) ? Integer.MAX_VALUE : nums1[partition1];
			int maxLeft2 = (partition2 == 0) ? Integer.MIN_VALUE : nums2[partition2 - 1];
			int minRight2 = (partition2 == n2) ? Integer.MAX_VALUE : nums2[partition2];
			if (maxLeft1 <= minRight2 && maxLeft2 <= minRight1) {
				if ((n1 + n2) % 2 == 0) {
					return (double) (Math.max(maxLeft1, maxLeft2) + Math.min(minRight1, minRight2)) / 2;
				} else {
					return (double) Math.max(maxLeft1, maxLeft2);
				}
			} else if (maxLeft1 > minRight2) {
				high = partition1 - 1;
			} else {
				low = partition1 + 1;
			}
		}

		return 0;
	}

}
