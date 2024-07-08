class Solution {

	public String finalString(String s) {
		StringBuilder result = new StringBuilder();
		for (final char character : s.toCharArray()) {
			if (character == 'i') {
				result.reverse();
			} else {
				result.append(character);
			}
		}
		return result.toString();
	}

}
