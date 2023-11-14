class Solution {

	public int findNthDigit(int n) {
		StringBuilder sb = new StringBuilder();
		for (int i = 1; i <= n; i++) {
			sb.append(i);
		}
		
		return Integer.parseInt(String.valueOf(sb.charAt(n - 1)));
	}

}
