import java.util.LinkedHashMap;

class Solution {

	public String kthDistinct(String[] array, int k) {
		var stringOccurrences = new LinkedHashMap<String, Integer>(array.length);
		for (final String string : array) {
			stringOccurrences.put(string, stringOccurrences.getOrDefault(string, 0) + 1);
		}
		for (final String string : array) {
			if (stringOccurrences.get(string) == 1 && --k == 0) {
				return string;
			}
		}
		return "";
	}

}
