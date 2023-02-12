import java.util.Arrays;

class Solution {

	public int[][] sortTheStudents(int[][] score, int k) {
		return Arrays
				.stream(score)
				.sorted((student1, student2) -> Integer.compare(student2[k], student1[k]))
				.toArray(int[][]::new);
	}

}