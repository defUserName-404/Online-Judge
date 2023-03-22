import java.util.Arrays;
import java.util.List;
import java.util.stream.Collectors;

class Solution {

	public List<Integer> lexicalOrder(int n) {
		int[] sortedInLexicographicalOrder = new int[n];
		int positionFilled = 0;
		for (int i = 1; i <= n; i++) {
			int indexToBeFilled = positionFilled + 1;

			sortedInLexicographicalOrder[indexToBeFilled] = i;
		}

		return Arrays.stream(sortedInLexicographicalOrder)
				.boxed()
				.collect(Collectors.toList());
	}

}
