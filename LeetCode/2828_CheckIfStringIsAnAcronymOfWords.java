import java.util.List;

class Solution {

	public boolean isAcronym(List<String> words, String s) {
		StringBuilder stringBuilder = new StringBuilder();
		words.forEach(word -> stringBuilder.append(word.charAt(0)));
		return stringBuilder.toString()
							.equals(s);
	}

}
