/*
	! TLE
*/

class SeatManager {

	private boolean[] isReserved;
	private int totalSeats;

	public SeatManager(int n) {
		totalSeats = n;
		isReserved = new boolean[totalSeats];
	}

	public int reserve() {
		for (int i = 0; i < totalSeats; i++) {
			if (!isReserved[i]) {
				isReserved[i] = true;

				return i + 1;
			}
		}

		return -1;
	}

	public void unreserve(int seatNumber) {
		isReserved[seatNumber - 1] = false;
	}
}

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager obj = new SeatManager(n);
 * int param_1 = obj.reserve();
 * obj.unreserve(seatNumber);
 */