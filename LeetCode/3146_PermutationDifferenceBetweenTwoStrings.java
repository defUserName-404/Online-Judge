import java.util.HashMap;
import java.util.Map;

class Solution {

	public int findPermutationDifference(String s, String t) {
		Map<Character, Integer> characterPosition = new HashMap<>();
		int sum = 0;
		for (int i = 0; i < s.length(); i++) {
			characterPosition.putIfAbsent(s.charAt(i), i);
		}
		for (int i = 0; i < t.length(); i++) {
			sum += Math.abs(characterPosition.getOrDefault(t.charAt(i), 0) - i);
		}
		return sum;
	}

}
