class Solution {

	public int mostWordsFound(String[] sentences) {
		int globalMax = 0, current = 0;

		for (String sentence : sentences) {
			String[] words = sentence.split(" ");

			current = words.length;

			if (current > globalMax) {
				globalMax = current;
			}
		}

		return globalMax;
	}

}
