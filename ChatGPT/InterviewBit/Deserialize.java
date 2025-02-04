import java.util.ArrayList;
import java.util.Collections;

public class Solution {
	public ArrayList<String> deserialize(String string) {
		final String[] words = string.split("\\d+~");
		ArrayList<String> result = new ArrayList<>();
		Collections.addAll(result, words);
		return result;
	}
}
