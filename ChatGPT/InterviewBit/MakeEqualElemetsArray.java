import java.util.HashSet;
import java.util.List;
import java.util.Set;

public class Solution {
	public int solve(List<Integer> array, int x) {
		Set<Integer> set = new HashSet<>();
		int max = Integer.MIN_VALUE, min = Integer.MAX_VALUE;
		for (final int currentNum : array) {
			max = Math.max(max, currentNum);
			min = Math.min(min, currentNum);
			set.add(currentNum);
		}
		if (set.size() > 3) {
			return 0;
		}
		if (max == min || max - min == x * 2) {
			return 1;
		}
		return 0;
	}
}
