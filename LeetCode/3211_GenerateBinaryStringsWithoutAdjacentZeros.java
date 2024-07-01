import java.util.ArrayList;
import java.util.List;

class Solution {

	public List<String> validStrings(int n) {
		List<String> result = new ArrayList<>();
		StringBuilder firstNumberSb = new StringBuilder();
		for (int i = 1; i <= n; i++) {
			firstNumberSb.append(i % 2 == 0 ? 1 : 0);
		}
		int firstNumber = Integer.parseInt(firstNumberSb.toString(), 2);
		for (int i = firstNumber; i < Math.pow(2, n); i++) {
			String binaryString = Integer.toBinaryString(i);
			if (binaryString.length() == n - 1) {
				binaryString = "0" + binaryString;
			}
			if (isValid(binaryString)) {
				result.add(binaryString);
			}
		}
		return result;
	}

	private boolean isValid(String binaryString) {
		for (int i = 0; i < binaryString.length() - 1; i++) {
			if (binaryString.charAt(i) == '0' && binaryString.charAt(i + 1) == '0') {
				return false;
			}
		}
		return true;
	}

}
