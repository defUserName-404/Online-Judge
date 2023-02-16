import java.util.HashSet;
import java.util.Set;

class Solution {

	public int maxConsecutive(int bottom, int top, int[] special) {
		Set<Integer> specialFloors = new HashSet<>();
		int globalMax = 0, currentMax = 0;

		for (final int x : special)
			specialFloors.add(x);

		for (int i = bottom; i <= top; i++) {
			if (specialFloors.contains(i)) {
				currentMax = 0;
				continue;
			}

			currentMax++;
			globalMax = Math.max(globalMax, currentMax);
		}

		return globalMax;
	}
}