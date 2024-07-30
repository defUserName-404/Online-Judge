class Solution {

	public int sumOfTheDigitsOfHarshadNumber(final int x) {
		int sumOfDigits = 0;
		int num = x;
		while (num != 0) {
			sumOfDigits += num % 10;
			num /= 10;
		}
		return x % sumOfDigits == 0 ? sumOfDigits : -1;
	}

}
