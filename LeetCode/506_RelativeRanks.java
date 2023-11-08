import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;

class Solution {

	public String[] findRelativeRanks(Integer[] score) {
		Map<Integer, Integer> scoreAndPosition = new HashMap<>();
		String[] rank = new String[score.length];
		Arrays.sort(score, Collections.reverseOrder());

		return rank;
	}

}
