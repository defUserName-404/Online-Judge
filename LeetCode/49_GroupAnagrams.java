import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.ArrayList;
import java.util.Arrays;

class Solution {

	private String sortedString(String string) {
		char[] stringToCharArray = string.toCharArray();
		Arrays.sort(stringToCharArray);

		return new String(stringToCharArray);
	}

	public List<List<String>> groupAnagrams(String[] strings) {
		Map<String, List<String>> stringOccurranceMap = new HashMap<>();

		for (final String string : strings) {
			String stringSorted = sortedString(string);

			List<String> anagrams = stringOccurranceMap.containsKey(stringSorted)
					? stringOccurranceMap.get(stringSorted)
					: new ArrayList<>();

			anagrams.add(string);
			stringOccurranceMap.put(stringSorted, anagrams);
		}

		return new ArrayList<>(stringOccurranceMap.values());
	}
}