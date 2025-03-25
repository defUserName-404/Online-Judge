class Solution {
	public boolean hasSameDigits(String s) {
		StringBuilder stringBuilder = new StringBuilder(s);
		while (stringBuilder.length() > 2) {
			StringBuilder nextStringBuilder = new StringBuilder();
			for (int i = 0; i < stringBuilder.length() - 1; i++) {
				int digitA = stringBuilder.charAt(i) - '0';
				int digitB = stringBuilder.charAt(i + 1) - '0';
				nextStringBuilder.append((char) ('0' + (digitA + digitB) % 10));
			}
			stringBuilder = nextStringBuilder;
		}
		return stringBuilder.charAt(0) == stringBuilder.charAt(1);
	}
}