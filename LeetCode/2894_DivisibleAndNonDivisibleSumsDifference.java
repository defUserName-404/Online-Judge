import java.util.stream.IntStream;

class Solution {

	public int differenceOfSums(int n, int m) {
		int totalSum = (n * (n + 1)) / 2;
		int num1 = IntStream.rangeClosed(1, n)
							.filter(num -> num % m != 0)
							.sum();
		int num2 = totalSum - num1;
		return num1 - num2;
	}

}
