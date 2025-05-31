class Solution {

	private int[] nums;
	private int target;

	private int getOccurrence(Position position) {
		int low = 0, high = nums.length - 1;
		int index = -1;
		while (low <= high) {
			int mid = (low + high) / 2;
			int value = nums[mid];
			if (value > target) {
				high = mid - 1;
			}
			else if (value < target) {
				low = mid + 1;
			}
			else {
				index = mid;
				if (position == Position.FIRST) {
					high = mid - 1;
				}
				else if (position == Position.LAST) {
					low = mid + 1;
				}
			}
		}
		return index;
	}

	public int[] searchRange(int[] nums, int target) {
		this.nums = nums;
		this.target = target;
		int firstIndex = getOccurrence(Position.FIRST);
		int lastIndex = getOccurrence(Position.LAST);
		return new int[]{firstIndex, lastIndex};
	}

	private enum Position {
		FIRST,
		LAST
	}

}
