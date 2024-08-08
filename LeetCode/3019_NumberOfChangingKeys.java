class Solution {

	public int countKeyChanges(String s) {
		s = s.toLowerCase();
		int changes = 0;
		char previous = s.charAt(0);
		for (char current : s.toCharArray()) {
			if (current != previous) {
				changes++;
			}
			previous = current;
		}
		return changes;
	}

}
