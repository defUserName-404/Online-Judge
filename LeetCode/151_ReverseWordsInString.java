class Solution {

	public String reverseWords(String string) {
		String[] words = string.trim().split("\\s+");
		StringBuilder stringBuilder = new StringBuilder();

		for (int i = words.length - 1; i >= 0; i--) {
			stringBuilder.append(words[i]);
			if (i != 0)
				stringBuilder.append(" ");
		}

		return stringBuilder.toString();
	}

}