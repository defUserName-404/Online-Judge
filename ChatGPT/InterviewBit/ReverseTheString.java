class Solution {
	public String solve(String string) {
		String[] words = string.trim().split("\\s+");
		StringBuilder result = new StringBuilder();
		for (int i = words.length - 1; i >= 0; i--) {
			result.append(words[i]);
			if (i != 0) result.append(" ");
		}
		return result.toString();
	}
}
