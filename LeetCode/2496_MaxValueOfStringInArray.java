class Solution {

	public int maximumValue(String[] strs) {
		int global = 0;

		for (String str : strs) {
			boolean onlyDigits = (str.charAt(0) >= '0') && (str.charAt(0) <= '9');

			for (char ch : str.toCharArray()) {
				if (!onlyDigits) {
					break;
				}

				if (!(ch >= '0' && ch <= '9')) {
					onlyDigits = false;
					break;
				}
			}

			int current = onlyDigits ? Integer.parseInt(str) : str.length();

			if (current > global) {
				global = current;
			}
		}

		return global;
	}

}
