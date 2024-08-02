class Solution {

	public int countAsterisks(String s) {
		boolean barFound = false;
		int count = 0;
		for (final char ch : s.toCharArray()) {
			if (ch == '|') {
				barFound = !barFound;
			}
			if (!barFound && ch == '*') {
				count++;
			}
		}
		return count;
	}

}
