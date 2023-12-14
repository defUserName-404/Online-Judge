/*
* You are given a string s consisting of n characters which are either 'X' or 'O'.
* A move is defined as selecting three consecutive characters of s and converting them to 'O'.
*  Note that if a move is applied to the character 'O', it will stay the same.
? Return the minimum number of moves required so that all the characters of s are converted to 'O'.
 */

class Solution {

	public int minimumMoves(String string) {
		int count = 0;
		int i = 0;

		while (i < string.length()) {
			if (string.charAt(i) == 'O') {
				i++;
			} else {
				i += 3;
				count++;
			}

		}

		return count;
	}

}
