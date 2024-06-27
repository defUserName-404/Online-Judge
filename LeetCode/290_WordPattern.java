import java.util.HashMap;
import java.util.Map;

class Solution {

	public boolean wordPattern(String pattern, String s) {
		String[] words = s.split(" ");
		Map<Character, String> myMap = new HashMap<>();
		if (pattern.length() != words.length) {
			return false;
		}
		for (int i = 0; i < pattern.length(); i++) {
			char key = pattern.charAt(i);
			String word = words[i];
			boolean doesContainKey = myMap.containsKey(key);
			if (doesContainKey && !myMap.get(key)
										.equals(word)) {
				return false;
			}
			if (!doesContainKey && myMap.containsValue(word)) {
				return false;
			}
			myMap.put(key, word);
		}
		return true;
	}

} 
