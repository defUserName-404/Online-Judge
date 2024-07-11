class Solution {

	public String maximumOddBinaryNumber(String s) {
		int oneCount = (int) s.chars()
							  .filter(ch -> ch == '1')
							  .count();
		return new StringBuilder().append("1".repeat(oneCount - 1))
								  .append("0".repeat(s.length() - oneCount))
								  .append('1')
								  .toString();
	}

}
