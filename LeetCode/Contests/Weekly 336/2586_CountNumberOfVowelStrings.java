class Solution {

	private boolean isVowel(final char c) {
		return "aeiou".indexOf(c) != -1;
	}

    public int vowelStrings(String[] words, int left, int right) {
		int vowelStringsCount = 0;
		for (int i = left; i <= right; i++) {
			String currentWord = words[i];
			if (isVowel(currentWord.charAt(0)) && isVowel(currentWord.charAt(currentWord.length() - 1)))
				vowelStringsCount++;
		}
		return vowelStringsCount;
    }

}
