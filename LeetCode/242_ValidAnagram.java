import java.util.Arrays;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.stream.Collectors;

// class Solution {

// 	public boolean isAnagram(String s, String t) {
// 		Map<String, Long> sOccurrance = Arrays.stream(s.split(""))
// 				.map(String::toLowerCase)
// 				.collect(Collectors.groupingBy(str -> str, LinkedHashMap::new, Collectors.counting()));

// 		Map<String, Long> tOccurrance = Arrays.stream(t.split(""))
// 				.map(String::toLowerCase)
// 				.collect(Collectors.groupingBy(str -> str, LinkedHashMap::new, Collectors.counting()));

// 		return sOccurrance.equals(tOccurrance);
// 	}

// }

class Solution {

	private String sortString(String string) {
		return string.chars()
				.sorted()
				.mapToObj(c -> String.valueOf(c))
				.collect(Collectors.joining());
	}

	public boolean isAnagram(String string1, String string2) {
		return sortString(string1)
				.equals(sortString(string2));
	}

}
