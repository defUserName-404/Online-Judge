import java.util.Stack;

class Solution {
	public String smallestNumber(String pattern) {
		StringBuilder result = new StringBuilder();
		Stack<Integer> digitStack = new Stack<>();
		for (int i = 0; i <= pattern.length(); i++) {
			digitStack.push(i + 1);
			if (i == pattern.length() || pattern.charAt(i) == 'I') {
				while (!digitStack.isEmpty()) {
					result.append(digitStack.pop());
				}
			}
		}
		return result.toString();
	}
}