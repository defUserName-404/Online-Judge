class Solution {

	public String makeSmallestPalindrome(String s) {
		int left = 0, right = s.length() - 1;
		char[] resultCharArray = new char[s.length()];
		while (left <= right) {
			var charToBeAdded = (char) Math.min(s.charAt(left), s.charAt(right));
			resultCharArray[left] = resultCharArray[right] = charToBeAdded;
			left++;
			right--;
		}
		return new String(resultCharArray);
	}

}
