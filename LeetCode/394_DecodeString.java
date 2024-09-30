import java.util.ArrayList;
import java.util.Collections;
import java.util.Stack;

class Solution {

	private final Stack<Character> stack = new Stack<>();

	public String decodeString(String s) {
		for (char character : s.toCharArray()) {
			if (character != ']') {
				stack.push(character);
			} else {
				String decodedString = extractEncodedLetters();
				removeOpeningBracket();
				int repetitionCount = extractRepetitionCount();
				pushRepeatedSegment(repetitionCount, decodedString);
			}
		}
		return buildFinalDecodedString();
	}

	private String extractEncodedLetters() {
		ArrayList<Character> lettersList = new ArrayList<>();
		while (!stack.isEmpty() && Character.isLetter(stack.peek())) {
			lettersList.add(stack.pop());
		}
		Collections.reverse(lettersList);
		return convertToString(lettersList);
	}

	private void removeOpeningBracket() {
		stack.pop();
	}

	private int extractRepetitionCount() {
		ArrayList<Character> digitsList = new ArrayList<>();
		while (!stack.isEmpty() && Character.isDigit(stack.peek())) {
			digitsList.add(stack.pop());
		}
		Collections.reverse(digitsList);
		String numberString = convertToString(digitsList);
		return Integer.parseInt(numberString);
	}

	private void pushRepeatedSegment(int n, String sub) {
		while (n-- > 0) {
			for (char ch : sub.toCharArray()) {
				stack.push(ch);
			}
		}
	}

	private String buildFinalDecodedString() {
		StringBuilder resultBuilder = new StringBuilder();
		while (!stack.isEmpty()) {
			resultBuilder.append(stack.pop());
		}
		return resultBuilder.reverse()
							.toString();
	}

	private String convertToString(ArrayList<Character> characters) {
		StringBuilder builder = new StringBuilder();
		for (Character ch : characters) {
			builder.append(ch);
		}
		return builder.toString();
	}

}

