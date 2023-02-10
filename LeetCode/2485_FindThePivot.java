class Solution {

	/*
	 * sum(1 to p - 1) == sum(p + 1 to n)
	 * solve the value of p
	 * pivot only exists if the value of p is a positive integer.
	 */

	public int pivotInteger(int n) {
		double pivotDouble = (Math.sqrt(8 * n * n + 8 * n) / 4);
		int pivot = (pivotDouble == (int) pivotDouble) ? (int) pivotDouble : -1;

		return pivot;
	}

}