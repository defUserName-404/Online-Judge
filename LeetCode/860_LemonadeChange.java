class Solution {

	public boolean lemonadeChange(int[] bills) {
		int fiveDollarBillsCount = 0, tenDollarBillsCount = 0;
		for (final int bill : bills) {
			switch (bill) {
				case 5:
					fiveDollarBillsCount++;
					break;
				case 10:
					tenDollarBillsCount++;
					fiveDollarBillsCount--;
					if (fiveDollarBillsCount < 0) {
						return false;
					}
					break;
				case 20:
					if (tenDollarBillsCount >= 1 && fiveDollarBillsCount >= 1) {
						tenDollarBillsCount--;
						fiveDollarBillsCount--;
					} else if (fiveDollarBillsCount >= 3) {
						fiveDollarBillsCount -= 3;
					} else {
						return false;
					}
					break;
				default:
					return false;
			}
		}
		return true;
	}

}
