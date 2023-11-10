import java.util.Arrays;
import java.util.Collections;

class Solution {

	public String[] sortPeople(String[] names, int[] heights) {
		int n = names.length;
		Integer[] heightsSorted = new Integer[n];
		for (int i = 0; i < n; i++) {
			heightsSorted[i] = heights[i];
		}
		Arrays.sort(heightsSorted, Collections.reverseOrder());
		String[] namesSorted = new String[n];

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (heightsSorted[i] == heights[j]) {
					namesSorted[i] = names[j];
				}
			}
		}

		return namesSorted;
	}

}
