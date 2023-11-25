import java.util.Arrays;

class MyHashMap {

	private final int[] values = new int[1000001];

	public MyHashMap() {
		Arrays.fill(values, -1);
	}

	public void put(int key, int value) {
		values[key] = value;
	}

	public int get(int key) {
		return values[key];
	}

	public void remove(int key) {
		values[key] = -1;
	}

}

/**
 * Your MyHashMap object will be instantiated and called as such: MyHashMap obj = new MyHashMap();
 * obj.put(key,value); int param_2 = obj.get(key); obj.remove(key);
 */
