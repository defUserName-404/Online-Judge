class Solution {

	public int sumOddLengthSubarrays(int[] array) {
		int sum = 0;
		for (int i = 0; i < array.length; i++) {
			int multiplier = ((i + 1) * (array.length - i) + 1) / 2;
			sum += array[i] * multiplier;
		}
		return sum;
	}

}
