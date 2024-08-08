class Solution {

	public int minimumPushes(String word) {
		int len = word.length();
		int pushes = 0;
		int i = 1;
		while (len > 0) {
			pushes += (Math.min(len, 8) * i);
			len -= 8;
			i++;
		}
		return pushes;
	}

}
