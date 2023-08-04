/*
 * You are given a string containing only uppercase and lowercase letters. Your
 * task is to write a function that compresses the string by replacing
 * consecutive repeated characters with the character followed by the count of
 * repetitions.
 *
 * For example:
 *
 * Input: "aaabbbbcc"
 * Output: "a3b4c2"
 *
 * Input: "abcd"
 * Output: "abcd" (No characters are repeated)
 *
 * Input: "aabbbccd"
 * Output: "a2b3c2d1"
 *
 * Your task is to implement a function compress_string(s: str) -> str that
 * takes a string s as input and returns the compressed string as output. If the
 * compressed string is not smaller than the original string, return the
 * original string itself.
 */

public class StringCompression {

	public String compressString(String str) {
		int n = str.length();
		StringBuilder result = new StringBuilder();
		int repeat = 1;
		for (int i = 0; i < n - 1; i++) {
			if (str.charAt(i) == str.charAt(i + 1)) {
				repeat++;
				continue;
			}
			result.append(str.charAt(i));
			if (repeat != 1) {
				result.append(repeat);
				repeat = 1;
			}
		}

		result.append(str.charAt(n - 1));
		if (repeat != 1)
			result.append(repeat);

		return result.toString();
	}

}
