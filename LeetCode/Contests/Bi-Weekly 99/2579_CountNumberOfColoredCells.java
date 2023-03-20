class Solution {

	public long coloredCells(int n) {
		long result = 1;

		for (int i = 1; i <= n; i++) {
			long increment = (long) (i - 1) * 4;
			result += increment;
		}

		return result;
	}

}
