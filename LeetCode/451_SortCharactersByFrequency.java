import java.util.Comparator;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Map.Entry;
import java.util.stream.Collectors;

class Solution {

	public String frequencySort(String s) {
		Map<Character, Integer> occurranceMapUnsorted = new HashMap<>();

		for (final char ch : s.toCharArray()) {
			if (occurranceMapUnsorted.containsKey(ch)) {
				occurranceMapUnsorted.put(ch, occurranceMapUnsorted.get(ch) + 1);
			}
			else {
				occurranceMapUnsorted.put(ch, 1);
			}

		}

		Map<Character, Integer> occurranceMapSorted = occurranceMapUnsorted
			.entrySet()
			.stream()
			.sorted(Entry.comparingByValue(Comparator.reverseOrder()))
			.collect(Collectors.toMap(Entry::getKey,
									  Entry::getValue, (e1, e2) -> e1, LinkedHashMap::new
									 ));

		StringBuilder ans = new StringBuilder();

		for (final Map.Entry<Character, Integer> curEntry : occurranceMapSorted.entrySet()) {
			for (int i = 0; i < curEntry.getValue(); i++) {
				ans.append(curEntry.getKey());
			}
		}

		return ans.toString();
	}

}
