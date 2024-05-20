import java.util.Arrays;

class Solution {

	public int maxIceCream(int[] costs, int coins) {
		int count = 0;
		Arrays.sort(costs);
		for (int cost : costs) {
			coins -= cost;
			if (coins < 0) {
				break;
			}
			count++;
		}
		return count;
	}

}
