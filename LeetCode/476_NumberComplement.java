class Solution {

	/*
	! Brute Forcing method
	 */
//	public int findComplement(int num) {
//		String binary = Integer.toBinaryString(num);
//		String complement = binary
//			.chars()
//			.mapToObj(c -> (char) c)
//			.map(digit -> digit == '0' ? '1' : '0')
//			.map(Object::toString)
//			.collect(Collectors.joining());
//		return Integer.parseInt(complement, 2);
//	}

	/*
	! Using bit-masking
	 */
	public int findComplement(int num) {
		int mask = (Integer.highestOneBit(num) << 1) - 1;
		return num ^ mask;
	}

}
