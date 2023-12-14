import java.util.Arrays;

class Solution {

	public String getSmallestString(int n, int k) {
		char[] letters = new char[n];
		Arrays.fill(letters, 'a');
		k -= n;

		while (k > 0) {
			n--;
			int toAdd = Math.min(25, k);
			letters[n] += (char) toAdd;
			k -= toAdd;
		}

		return new String(letters);
	}

}
