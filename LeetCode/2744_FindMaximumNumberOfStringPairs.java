import java.util.HashSet;

class Solution {

	public int maximumNumberOfStringPairs(String[] words) {
		var wordSet = new HashSet<String>();
		int count = 0;
		for (final String word : words) {
			if (wordSet.contains(word)) {
				count++;
			} else {
				wordSet.add(new StringBuilder(word).reverse()
												   .toString());
			}
		}
		return count;
	}

}
