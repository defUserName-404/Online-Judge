class SmallestInfiniteSet {

	private final byte[] numbers;

	public SmallestInfiniteSet() {
		numbers = new byte[1001];
		for (int i = 1; i <= 1000; i++)
			numbers[i] = 1;
	}

	public int popSmallest() {
		int currentSmallest = 0;

		for (int i = 1; i <= 1000; i++) {
			if (numbers[i] != 0) {
				currentSmallest = i;
				numbers[i] = 0;
				break;
			}
		}

		return currentSmallest;
	}

	public void addBack(int num) {
		numbers[num] = 1;
	}

}

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet obj = new SmallestInfiniteSet();
 * int param_1 = obj.popSmallest();
 * obj.addBack(num);
 */
