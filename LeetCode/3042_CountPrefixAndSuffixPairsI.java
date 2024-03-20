class Solution {

	/**
	 * @param testString first string
	 * @param word       second string
	 * @return {@code true} if the first string is a prefix and suffix of the second string or {@code false} otherwise
	 */
	private boolean isPrefixAndSuffix(final String testString, final String word) {
		if (testString.length() >= word.length()) {
			return word.equals(testString);
		}
		final String firstCharacters = word.substring(0, testString.length());
		final String lastCharacters = word.substring(word.length() - testString.length());
		return firstCharacters.equals(testString) && lastCharacters.equals(testString);
	}

	public int countPrefixSuffixPairs(String[] words) {
		int count = 0;

		for (int i = 0; i < words.length; i++) {
			String testString = words[i];
			for (int j = i + 1; j < words.length; j++) {
				String currentString = words[j];
				if (isPrefixAndSuffix(testString, currentString)) {
					count++;
				}
			}
		}

		return count;
	}

}
