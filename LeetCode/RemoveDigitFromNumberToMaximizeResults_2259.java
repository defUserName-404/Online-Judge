import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

class Solution {
	public String removeDigit(String number, char digit) {
		List<String> permutations = new ArrayList<>();
		int len = number.length();

		for (int i = 0; i < len; i++) {
			char currentChar = number.charAt(i);
			StringBuilder permutation = new StringBuilder();

			if (currentChar == digit) {
				permutation.append(number.substring(0, i));
				permutation.append(number.substring(i + 1, len));
			}

			permutations.add(permutation.toString());
		}

		Collections.sort(permutations);

		return permutations.get(permutations.size() - 1);
	}
}