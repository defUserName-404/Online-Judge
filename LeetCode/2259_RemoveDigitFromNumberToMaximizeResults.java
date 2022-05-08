import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

class Solution {

	// Approach 1
	public String removeDigit_Approach1(String number, char digit) {
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

	// Approach 2
	public String removeDigit_Approach2(String number, char digit) {
		int index = 0;
		int len = number.length();

		for (int i = 0; i < len; i++) {
			if (number.charAt(i) == digit) {
				index = i;

				if (i < len - 1 && number.charAt(i + 1) > digit)
					break;
			}
		}

		return (number.substring(0, index) + number.substring(index + 1));
	}
}