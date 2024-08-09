import java.util.ArrayList;
import java.util.List;

class Solution {

	public List<String> buildArray(int[] target, int n) {
		List<String> operations = new ArrayList<>();
		int index = 0;
		for (int i = 1; i <= n; i++) {
			if (index >= target.length) {
				break;
			}
			if (target[index] == i) {
				operations.add("Push");
				index++;
			} else {
				operations.add("Push");
				operations.add("Pop");
			}
		}
		return operations;
	}

}
