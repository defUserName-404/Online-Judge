import java.util.Stack;

public class Solution {
	public int solve(String s) {
		Stack<Character> stack = new Stack<>();
		for (final Character c : s.toCharArray()) {
			if (c == '(') {
				stack.push(c);
			} else {
				if (!stack.isEmpty() && stack.peek() == '(') {
					stack.pop();
				} else {
					stack.push(c);
				}
			}
		}
		return stack.size();
	}
}
