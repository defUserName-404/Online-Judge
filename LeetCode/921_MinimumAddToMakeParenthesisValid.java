import java.util.Stack;

class Solution {

	public int minAddToMakeValid(String s) {
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
