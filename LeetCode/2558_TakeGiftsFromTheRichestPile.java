import java.util.Arrays;

class Solution {

	public long pickGifts(int[] gifts, int k) {
		long result = 0;

		while (k != 0) {
			Arrays.sort(gifts);
			int currentMax = (int) Math.floor(Math.sqrt(gifts[gifts.length - 1]));
			gifts[gifts.length - 1] = currentMax;
			k--;
		}

		for (int gift : gifts) {
			result += gift;
		}

		return result;
	}

}
