class Solution {
	public String convertDateToBinary(String date) {
		String[] parts = date.split("-");
		StringBuilder result = new StringBuilder();
		for (int i = 0; i < parts.length; i++) {
			result.append(Integer.toBinaryString(Integer.parseInt(parts[i])));
			if (i != parts.length - 1) {
				result.append("-");
			}
		}
		return result.toString();
	}
}