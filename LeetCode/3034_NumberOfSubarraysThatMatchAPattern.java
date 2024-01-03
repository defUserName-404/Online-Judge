import java.util.Arrays;

class Solution {

	private boolean doesMatchPattern(int[] subarray, int[] pattern) {
		for (int i = 0; i < subarray.length - 1; i++) {
			int current = subarray[i + 1] - subarray[i];
			switch (pattern[i]) {
				case 0:
					if (current != 0) {
						return false;
					}
					break;
				case 1:
					if (current <= 0) {
						return false;
					}
					break;
				case -1:
					if (current >= 0) {
						return false;
					}
					break;
				default:
					return false;
			}
		}

		return true;
	}

	public int countMatchingSubarrays(int[] array, int[] pattern) {
		int size = pattern.length;
		int count = 0;
		for (int i = 0; i < array.length - size; i++) {
			int[] subarray = Arrays.copyOfRange(array, i, i + size + 1);
			if (doesMatchPattern(subarray, pattern)) {
				count++;
			}
		}

		return count;
	}

}
