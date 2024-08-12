import java.util.HashSet;

class Solution {

	public int countDistinctIntegers(int[] nums) {
		var numbersSet = new HashSet<Integer>();
		for (int num : nums) {
			numbersSet.add(num);
			numbersSet.add(reverse(num));
		}
		return numbersSet.size();
	}

	private int reverse(int num) {
		int reverseNum = 0;
		while (num > 0) {
			reverseNum = (reverseNum * 10) + (num % 10);
			num /= 10;
		}
		return reverseNum;
	}

}
