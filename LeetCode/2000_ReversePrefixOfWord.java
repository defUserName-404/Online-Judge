class Solution {
	public String reversePrefix(String word, char ch) {
		final int indexOfCh = word.indexOf(ch);
		// if indexOfCh == 0, then character is found at the first index and there's no need to modify
		//  as well as indexOfCh == -1 then character is not found so there's no need to modify
		if (indexOfCh < 1) {
			return word;
		}
		final String reversedPart = revereString(word.substring(0, indexOfCh + 1));
		final String unmodifiedPart = word.substring(indexOfCh + 1);
		return reversedPart + unmodifiedPart;
	}

	private String revereString(String word) {
		return new StringBuilder(word).reverse().toString();
	}
}