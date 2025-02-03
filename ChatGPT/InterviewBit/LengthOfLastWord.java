public class Solution {
	// DO NOT MODIFY THE LIST. IT IS READ ONLY
	public int lengthOfLastWord(final String string) {
		final String[] words = string.split(" ");
		if (words.length == 0) {
			return 0;
		}
		return words[words.length - 1].length();
	}
}
