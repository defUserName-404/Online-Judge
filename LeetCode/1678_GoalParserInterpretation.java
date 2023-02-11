class Solution {

	public String interpret(String command) {
		StringBuilder result = new StringBuilder();

		for (int i = 0; i < command.length(); i++) {
			String parsedString = "";

			if (command.charAt(i) == 'G') {
				parsedString = "G";
			} else if (command.charAt(i) == '(' && command.charAt(i + 1) == ')') {
				parsedString = "o";
				i += 1;
			} else {
				parsedString = "al";
				i += 3;
			}

			result.append(parsedString);
		}

		return result.toString();
	}
}