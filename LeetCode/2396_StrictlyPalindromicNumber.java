class Solution {

	private boolean isPalindrome(String string) {
		return string.equals(new StringBuffer(string).reverse().toString());
	}

	public boolean isStrictlyPalindromic(int n) {
		for (int i = 2; i <= n - 2; i++)
			if (!isPalindrome(String.valueOf(Integer.toString(n, i))))
				return false;

		return true;
	}

}
