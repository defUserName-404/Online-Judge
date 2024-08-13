class Solution {

	/*
	 * Solution 1: Iterate through the string and remove trailing zeros
	 */
//	public String removeTrailingZeros(String num) {
//		int i = num.length() - 1;
//		while (i >= 0 && num.charAt(i) == '0') {
//			i--;
//		}
//		return num.substring(0, i + 1);
//	}

	/*
	 * Solution 2: Use of regex
	 */
	public String removeTrailingZeros(String num) {
		return num.replaceAll("0*$", "");
	}

}
