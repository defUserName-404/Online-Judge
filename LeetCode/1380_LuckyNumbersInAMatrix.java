import java.util.ArrayList;
import java.util.List;
import java.util.stream.Collectors;

class Solution {

	public List<Integer> luckyNumbers(int[][] matrix) {
		List<Integer> minimumRows = new ArrayList<>();
		List<Integer> maximumColumns = new ArrayList<>();
		for (int[] rows : matrix) {
			int minRow = Integer.MAX_VALUE;
			for (int j = 0; j < matrix[0].length; j++) {
				minRow = Math.min(minRow, rows[j]);
			}
			minimumRows.add(minRow);
		}
		for (int j = 0; j < matrix[0].length; j++) {
			int maxColumn = Integer.MIN_VALUE;
			for (int[] rows : matrix) {
				maxColumn = Math.max(maxColumn, rows[j]);
			}
			maximumColumns.add(maxColumn);
		}
		return minimumRows.stream()
						  .filter(n1 -> maximumColumns.stream()
													  .anyMatch(n1::equals))
						  .collect(Collectors.toList());
	}

}
