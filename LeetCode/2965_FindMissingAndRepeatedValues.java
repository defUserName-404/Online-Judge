import java.util.Arrays;
import java.util.Map;
import java.util.stream.Collectors;
import java.util.stream.IntStream;

import static java.util.function.UnaryOperator.identity;

class Solution {

	public int[] findMissingAndRepeatedValues(int[][] grid) {
		Map<Integer, Long> valuesFrequency = Arrays.stream(grid)
												   .flatMapToInt(IntStream::of)
												   .boxed()
												   .collect(Collectors.groupingBy(identity(), Collectors.counting()));
		int n = grid.length, a = 0, b = 0;
		for (int i = 1; i <= n * n; i++) {
			long count = valuesFrequency.getOrDefault(i, 0L);
			if (count == 0) {
				b = i;
			} else if (count == 2) {
				a = i;
			}
		}

		return new int[] {a, b};
	}

}
