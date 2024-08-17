class Solution {

	public int countTestedDevices(int[] batteryPercentages) {
		int count = 0;
		for (int percent : batteryPercentages) {
			if (percent - count > 0) {
				count++;
			}
		}
		return count;
	}

}
