class Solution {

	public boolean isSubsequence(String string, String targetString) {
		int lenOfString = string.length();
		int lenOfTargetString = targetString.length();

		if ((lenOfString > lenOfTargetString) ||
				(lenOfString == lenOfTargetString && !string.equals(targetString)))
			return false;

		int nextCharPosition = 0;

		for (int i = 0; i < lenOfString; i++) {
			int currentCharPosition = targetString.indexOf(string.charAt(i), nextCharPosition);

			if (currentCharPosition == -1)
				return false;

			nextCharPosition = currentCharPosition + 1;
		}

		return true;
	}

}
