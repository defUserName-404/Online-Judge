class Solution {

	public int alternateDigitSum(int n) {
		int sum = 0;
		boolean isPositive = (String
								  .valueOf(n)
								  .length() % 2 == 1
		);

		while (n > 0) {
			int digit = n % 10;
			n /= 10;
			sum += isPositive ? digit : -digit;
			isPositive = !isPositive;
		}

		return sum;
	}

}
