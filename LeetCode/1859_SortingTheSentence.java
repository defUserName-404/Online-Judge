class Solution {

	public String sortSentence(String s) {
		String[] words = s.split(" ");
		String[] sortedSentenceArray = new String[words.length];

		for (String word : words) {
			char lastCharacter = word.charAt(word.length() - 1);
			int index = lastCharacter - '0' - 1;
			String finalWord = String.copyValueOf(word.toCharArray(), 0, word.length() - 1);
			sortedSentenceArray[index] = finalWord;
		}

		StringBuilder sortedSentencStringBuilder = new StringBuilder();

		for (int i = 0; i < sortedSentenceArray.length; i++) {
			sortedSentencStringBuilder.append(sortedSentenceArray[i]);

			if (i != sortedSentenceArray.length - 1)
				sortedSentencStringBuilder.append(" ");
		}

		return sortedSentencStringBuilder.toString();
	}
}