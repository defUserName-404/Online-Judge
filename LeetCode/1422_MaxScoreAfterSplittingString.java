class Solution {

	/*
	 ? Given a string s of zeros and ones, return the maximum score after splitting the string into two non-empty substrings (i.e. left substring and right substring).
	 * The score after splitting a string is the number of zeros in the left substring plus the number of ones in the right substring.
	 */

	public int maxScore(String s) {
		int zeroCount = 0, oneCount = 0;
		int max = Integer.MIN_VALUE;
		for (int i = 0; i < s.length(); i++) {
			if (s.charAt(i) == '0') {
				zeroCount++;
			} else {
				oneCount++;
			}
			if (i != s.length() - 1) {
				max = Math.max(max, zeroCount - oneCount);
			}
		}
		return max + oneCount;
	}

}
