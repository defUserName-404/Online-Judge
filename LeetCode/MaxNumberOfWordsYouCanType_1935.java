class Solution {
	public int canBeTypedWords(String text, String brokenLetters) {
		int count = 0;
		final String[] words = text.split(" ");

		for (final String word : words) {
			for (final char brokenLetter : brokenLetters.toCharArray()) {
				if (word.contains(Character.toString(brokenLetter))) {
					count++;
					break;
				}
			}
		}

		return words.length - count;
	}
}