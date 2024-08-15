import java.util.HashSet;

class Solution {

	public int[] findThePrefixCommonArray(int[] A, int[] B) {
		var set = new HashSet<Integer>();
		var result = new int[A.length];
		for (int i = 0; i < A.length; i++) {
			int count = 0;
			if (set.contains(A[i])) {
				count++;
			}
			if (set.contains(B[i])) {
				count++;
			}
			if (A[i] == B[i]) {
				count++;
			}
			result[i] += (i > 0) ? result[i - 1] + count : count;
			set.add(A[i]);
			set.add(B[i]);
		}
		return result;
	}

}
