import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

class Solution {

	public String sortVowels(String s) {
		List<Character> vowels = new ArrayList<>();
		StringBuilder result = new StringBuilder();
		for (int i = 0; i < s.length(); i++) {
			char c = s.charAt(i);
			if (isVowel(c)) {
				vowels.add(c);
			}
		}
		Collections.sort(vowels);
		int vowelIndex = 0;
		for (int i = 0; i < s.length(); i++) {
			char c = s.charAt(i);
			result.append(isVowel(c) ? vowels.get(vowelIndex++) : c);
		}
		return result.toString();
	}

	private boolean isVowel(char c) {
		return "aeiouAEIOU".indexOf(c) >= 0;
	}

}
