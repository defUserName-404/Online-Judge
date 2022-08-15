class Solution {

	public int[] sumZero(int n) {
		int[] array = new int[n];
		int left = n / 2;
		int right = -left;

		for (int i = 0; i < n / 2; i++) {
			array[i] = left;
			array[n - i - 1] = right;
			left--;
			right++;
		}

		return array;
	}
}