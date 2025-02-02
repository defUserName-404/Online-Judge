import java.util.ArrayList;
import java.util.List;

public class Solution {
	public int climbStairs(int num) {
		List<Integer> dp = new ArrayList<>(num + 1);
		dp.set(0, 1);
		dp.set(1, 1);
		for (int i = 2; i < num + 1; i++) {
			dp.set(i, (dp.get(i - 1) + dp.get(i - 2)));
		}
		return dp.get(num - 1);
	}
}
