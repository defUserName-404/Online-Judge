class Solution {

	public int minPartitions(String number) {
		int maximumDigit = 0;

		for (int i = 0; i < number.length(); i++) {
			int currentDigit = number.charAt(i) - '0';

			if (currentDigit > maximumDigit) {
				maximumDigit = currentDigit;
			}
		}

		return maximumDigit;
	}

}
