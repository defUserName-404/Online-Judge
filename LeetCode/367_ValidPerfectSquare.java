class Solution {

	/*
	 * ? We can't use built in square root function
	 * We know that square numbers are sum of N odd numbers
	 * 1st squre num = 1
	 * 2nd sqaure num = 1 + 3 = 4
	 * 3rd square num = 1 + 3 + 5 = 9 and so on
	 */
	public boolean isPerfectSquare(int num) {
		int oddNum = 1;

		while (num > 0) {
			num -= oddNum;
			oddNum += 2;

			if (num == 0)
				return true;
		}

		return false;
	}
}