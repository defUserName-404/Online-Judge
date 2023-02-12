package Java_Problems;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class Solution {

	public static void main(String[] args) throws IOException {
		BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

		int N = Integer.parseInt(bufferedReader.readLine().trim());
		printMultiplicationTable(N);

		bufferedReader.close();
	}

	private static void printMultiplicationTable(int n) {
		for (int i = 1; i <= 10; i++)
			System.out.println(n + " x " + i + " = " + n * i);
	}

}
