class Solution {

	public String freqAlphabets(String s) {
		var result = new StringBuilder();
		var length = s.length();
		for (int i = 0; i < length; i++) {
			int number;
			if (i < length - 2 && s.charAt(i + 2) == '#') {
				number = Integer.parseInt(s.substring(i, i + 2));
				i += 2;
			} else {
				number = s.charAt(i) - '0';
			}
			result.append((char) (number + 'a' - 1));
		}
		return result.toString();
	}

}
