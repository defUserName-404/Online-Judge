class Solution {
	private int countVowels(String string) {
		int count = 0;
		for (int i = 0; i < string.length(); i++) {
			if ("aeiouAEIOU".indexOf(string.charAt(i)) != -1) {
				count++;
			}
		}
		return count;
	}

	public boolean halvesAreAlike(String string) {
		int length = string.length();
		return countVowels(string.substring(0, length / 2)) == countVowels(string.substring(length / 2));
	}
}