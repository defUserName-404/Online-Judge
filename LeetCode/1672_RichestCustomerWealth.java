class Solution {

	public int maximumWealth(int[][] accounts) {
		int maxWealth = 0;

		for (int[] account : accounts) {
			int currentWealth = 0;

			for (int i : account) {
				currentWealth += i;
			}

			if (currentWealth > maxWealth) {
				maxWealth = currentWealth;
			}
		}

		return maxWealth;
	}

}
