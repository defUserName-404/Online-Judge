import java.util.ArrayList;

public class Solution {
	public int solve(ArrayList<Integer> array) {
		int min = array.get(0), max = array.get(0);
		for (final int num : array) {
			min = Math.min(num, min);
			max = Math.max(num, max);
		}
		return min + max;
	}
}
