class Solution {

	public int[] xorQueries(int[] array, int[][] queries) {
		int[] prefixXor = new int[queries.length + 1];
		int[] result = new int[queries.length];

		for (int i = 1; i < prefixXor.length; i++) {
			prefixXor[i] = prefixXor[i - 1] ^ prefixXor[i];
			System.out.println(prefixXor[i]);
		}

		for (int i = 0; i < queries.length; i++) {
			int left = queries[i][0];
			int right = queries[i][1];

			result[i] = left == 0 ? prefixXor[right] : prefixXor[right] ^ prefixXor[left - 1];
		}

		return result;
	}
}