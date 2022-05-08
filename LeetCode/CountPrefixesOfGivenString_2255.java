class Solution {
	public int countPrefixes(String[] words, String s) {
		int count = 0;

		for (final String word : words) {
			int wordLength = word.length();

			if (wordLength > s.length())
				continue;

			String subString = s.substring(0, wordLength);

			if (word.equals(subString))
				count++;
		}

		return count;
	}
}