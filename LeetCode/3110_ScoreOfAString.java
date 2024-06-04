import java.util.stream.IntStream;

class Solution {

	public int scoreOfString(String string) {
		return IntStream.range(0, string.length() - 1)
						.map(i -> Math.abs(string.charAt(i) - string.charAt(i + 1)))
						.sum();
	}

}
