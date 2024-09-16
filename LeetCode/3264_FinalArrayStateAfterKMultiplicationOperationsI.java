import java.util.PriorityQueue;

class Solution {

	public int[] getFinalState(int[] nums, int k, int multiplier) {
		PriorityQueue<Pair<Integer, Integer>> minHeap = new PriorityQueue<>();
		for (int i = 0; i < nums.length; i++) {
			minHeap.add(new Pair<>(nums[i], i));
		}
		for (int i = 0; i < k; i++) {
			Pair<Integer, Integer> pair = minHeap.poll();
			int newValue = pair.first() * multiplier;
			int index = pair.second();
			nums[index] = newValue;
			minHeap.add(new Pair<>(newValue, index));
		}
		return nums;
	}

}

record Pair<T extends Comparable<T>, U extends Comparable<U>>(T first, U second) implements Comparable<Pair<T, U>> {

	@Override
	public int compareTo(Pair<T, U> other) {
		int cmp = this.first.compareTo(other.first);
		return (cmp != 0) ? cmp : this.second.compareTo(other.second);
	}

	@Override
	public boolean equals(Object obj) {
		if (this == obj) {
			return true;
		}
		if (obj == null || getClass() != obj.getClass()) {
			return false;
		}
		Pair<?, ?> pair = (Pair<?, ?>) obj;
		return first.equals(pair.first);
	}

	@Override
	public int hashCode() {
		return first.hashCode();
	}

	@Override
	public String toString() {
		return "(" + first + ", " + second + ")";
	}

}
