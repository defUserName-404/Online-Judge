import java.util.ArrayList;
import java.util.List;

class Solution {

	/*
	 * Solution 1
	 */

//	public List<String> validStrings(int n) {
//		List<String> result = new ArrayList<>();
//		StringBuilder firstNumberSb = new StringBuilder();
//		for (int i = 1; i <= n; i++) {
//			firstNumberSb.append(i % 2 == 0 ? 1 : 0);
//		}
//		int firstNumber = Integer.parseInt(firstNumberSb.toString(), 2);
//		for (int i = firstNumber; i < Math.pow(2, n); i++) {
//			String binaryString = Integer.toBinaryString(i);
//			if (binaryString.length() == n - 1) {
//				binaryString = "0" + binaryString;
//			}
//			if (isValid(binaryString)) {
//				result.add(binaryString);
//			}
//		}
//		return result;
//	}
//
//	private boolean isValid(String binaryString) {
//		for (int i = 0; i < binaryString.length() - 1; i++) {
//			if (binaryString.charAt(i) == '0' && binaryString.charAt(i + 1) == '0') {
//				return false;
//			}
//		}
//		return true;
//	}

	/*
	 * Solution 2
	 */
	
	public List<String> validStrings(int n) {
		List<String> result = new ArrayList<>();
		generateStrings(result, new StringBuilder(), n, -1);
		return result;
	}

	private void generateStrings(List<String> result, StringBuilder sb, int n, int lastChar) {
		if (sb.length() == n) {
			result.add(sb.toString());
			return;
		}
		sb.append('1');
		generateStrings(result, sb, n, 1);
		sb.deleteCharAt(sb.length() - 1);
		if (lastChar != 0) {
			sb.append('0');
			generateStrings(result, sb, n, 0);
			sb.deleteCharAt(sb.length() - 1);
		}
	}

}
