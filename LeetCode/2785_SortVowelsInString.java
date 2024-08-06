import java.util.PriorityQueue;
import java.util.stream.Collectors;

class Solution {

	public String sortVowels(String s) {
		var queue = s.chars()
					 .filter(ch -> isVowel((char) ch))
					 .mapToObj(c -> (char) c)
					 .collect(Collectors.toCollection(PriorityQueue::new));
		var result = new StringBuilder();
		for (int i = 0; i < s.length(); i++) {
			char c = s.charAt(i);
			if (isVowel(c)) {
				char vowel = queue.remove();
				result.append(vowel);
				continue;
			}
			result.append(c);
		}
		return result.toString();
	}

	private boolean isVowel(char c) {
		return "aeiouAEIOU".indexOf(c) >= 0;
	}

}
