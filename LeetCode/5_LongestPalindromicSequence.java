/*
 * Brute force solution (TLE)
 */

// class Solution {

// private boolean isPalindrome(String string) {
// return string.equals(new StringBuilder(string).reverse().toString());
// }

// public String longestPalindrome(String s) {
// int n = s.length();
// int longest = 0;
// int[] longestPalindromicSubstringIndex = new int[2];

// for (int i = 0; i < n; i++) {
// for (int j = i + 1; j <= n; j++) {
// if (isPalindrome(s.substring(i, j))) {
// int current = j - i;
// if (current > longest) {
// longest = current;
// longestPalindromicSubstringIndex[0] = i;
// longestPalindromicSubstringIndex[1] = j;
// }
// }
// }
// }

// return s.substring(longestPalindromicSubstringIndex[0],
// longestPalindromicSubstringIndex[1]);
// }
// }

/*
 * The algorithm utilizes dynamic programming to find the longest palindromic substring
 * in a given string s. Key steps include initializing a 2D array to store palindrome information,
 * checking and updating palindromes for substrings of increasing length,
 * and efficiently tracking the longest palindrome's start index and length.
 * The final result is the substring of s corresponding to the longest palindromic substring.
 * The algorithm has a time complexity of O(n^2) and a space complexity of O(n^2),
 * where n is the length of the input string s.
 */
class Solution {

	public String longestPalindrome(String s) {
		int n = s.length();
		boolean[][] isPalindrome = new boolean[n][n];

		int maxLength = 1;
		int start = 0;

		for (int len = 1; len <= n; len++) {
			for (int i = 0; i <= n - len; i++) {
				int j = i + len - 1;
				isPalindrome[i][j] = s.charAt(i) == s.charAt(j) && (len <= 2 || isPalindrome[i + 1][j - 1]);
				if (isPalindrome[i][j] && len > maxLength) {
					maxLength = len;
					start = i;
				}
			}
		}

		return s.substring(start, start + maxLength);
	}

}