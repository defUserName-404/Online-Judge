import java.util.Arrays;

class Solution {

	/*
	 * Approach 1: just experimenting with functional approach
	 * Not Optimized because we are iterating the array three times unnecessarily
	 */
	public double average1(int[] salary) {
		int totalSalary = Arrays
			.stream(salary)
			.sum();
		int maxSalary = Arrays
			.stream(salary)
			.max()
			.getAsInt();
		int minSalary = Arrays
			.stream(salary)
			.min()
			.getAsInt();

		return ((double) totalSalary - maxSalary - minSalary) / (salary.length - 2);
	}

	/*
	 * Approach 2
	 */
	public double average2(int[] salary) {
		double totalSalary = 0;
		int maxSalary = Integer.MIN_VALUE,
			minSalary = Integer.MAX_VALUE;

		for (final int x : salary) {
			if (x > maxSalary) {
				maxSalary = x;
			}
			if (x < minSalary) {
				minSalary = x;
			}

			totalSalary += x;
		}

		return ((totalSalary - maxSalary - minSalary) / (salary.length - 2));
	}

}
