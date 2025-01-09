import java.util.Comparator;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Map.Entry;
import java.util.stream.Collectors;

class Solution {

	public String frequencySort(String s) {
        Solution.countCharacterOccurrance(s);

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
