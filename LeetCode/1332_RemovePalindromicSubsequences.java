class Solution {

	public int removePalindromeSub(String string) {
		String reverse = new StringBuilder(string)
			.reverse()
			.toString();

		if (string.equals(reverse)) {
			return 1;
		}

		return 2;
	}

}
