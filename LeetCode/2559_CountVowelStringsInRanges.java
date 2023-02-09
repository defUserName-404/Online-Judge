import java.util.Arrays;

class Solution {

	private boolean isVowel(char x) {
		final char[] vowels = { 'a', 'e', 'i', 'o', 'u' };

		for (int i = 0; i < vowels.length; i++)
			if (x == vowels[i])
				return true;

		return false;
	}

	public int[] vowelStrings(String[] words, int[][] queries) {
		int[] prefixArrayOfVowelStrings = new int[words.length + 1];
		Arrays.fill(prefixArrayOfVowelStrings, 0);

		for (int i = 1; i < prefixArrayOfVowelStrings.length; i++) {
			final String word = words[i - 1];

			prefixArrayOfVowelStrings[i] = isVowel(word.charAt(0)) && isVowel(word.charAt(word.length() - 1))
					? prefixArrayOfVowelStrings[i - 1] + 1
					: prefixArrayOfVowelStrings[i - 1];
		}

		for (int x : prefixArrayOfVowelStrings)
			System.out.println(x);

		int[] result = new int[queries.length];

		for (int i = 0; i < queries.length; i++) {
			int left = queries[i][0];
			int right = queries[i][1];

			result[i] = prefixArrayOfVowelStrings[right + 1] - prefixArrayOfVowelStrings[left];
		}

		return result;
	}
}