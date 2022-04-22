class Solution {
	public int canBeTypedWords(String text, String brokenLetters) {
		int count = 0;
		String[] words = text.split(" ");
		char[] brokenLettersToCharArray = brokenLetters.toCharArray();

		for (final String word : words) {
			for (final char brokenLetter : brokenLettersToCharArray) {
				if (word.contains(Character.toString(brokenLetter))) {
					count++;
					break;
				}
			}
		}

		return words.length - count;
	}
}