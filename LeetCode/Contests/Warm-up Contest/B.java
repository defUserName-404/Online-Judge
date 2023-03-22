class Solution {

	public int firstUniqChar(String s) {
		int[] characterOccurrance = new int[26];

		for (final char ch : s.toCharArray())
			characterOccurrance[ch - 'a']++;

		for (int i = 0; i < s.length(); i++) {
			if (characterOccurrance[s.charAt(i) - 'a'] == 1)
				return i;
		}

		return -1;
	}

}
