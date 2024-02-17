import java.util.ArrayList;
import java.util.List;

class Solution {

	public List<Integer> findWordsContaining(String[] words, char x) {
		List<Integer> indicesContainingCharacters = new ArrayList<>();

		for (int i = 0; i < words.length; i++) {
			if (words[i].indexOf(x) != -1) {
				indicesContainingCharacters.add(i);
			}
		}

		return indicesContainingCharacters;
	}

}
