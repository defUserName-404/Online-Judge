class Solution {

	public boolean isStrictlyPalindromic(int n) {
		for (int i = 2; i <= n - 2; i++)
			if (!isPalindrome(Integer.toString(n, i)))
				return false;

		return true;
	}

	private boolean isPalindrome(String string) {
		return string.contentEquals(new StringBuffer(string).reverse());
	}

}
