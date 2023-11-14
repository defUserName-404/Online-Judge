class Solution {

	public int countOdds(int low, int high) {
		int odd = 0;

		if (low % 2 == 1) {
			odd++;
		}
		if (high % 2 == 1) {
			odd++;
		}

		return (high - low + odd) / 2;
	}

}
