import java.util.ArrayList;
import java.util.List;

public class EvenFibonacciNumbers_2 {

	private List<Long> fibonacci = new ArrayList<Long>();
	private long sum = 0;

	private void generateFibonacci() {
		fibonacci.add(1l);
		fibonacci.add(2l);

		for (int i = 2;; i++) {
			long current = fibonacci.get(i - 1) + fibonacci.get(i - 2);

			if (current >= 4_000_000)
				return;

			sum += current % 2 == 0 ? current : 0;

			fibonacci.add(current);
		}
	}

	public long getEvenFibonacciSumTillFourMillion() {
		generateFibonacci();

		return sum + 2;
	}

}