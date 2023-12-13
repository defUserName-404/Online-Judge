import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

class Solution {

	public void sortPeopleByHeight(int[][] people) {
		Arrays.sort(people, (person1, person2) -> {
			int comparison = Integer.compare(person2[0], person1[0]);
			return (comparison == 0) ? Integer.compare(person1[1], person2[1]) : comparison;
		});
	}

	public int[][] reconstructQueue(int[][] people) {
		List<int[]> result = new ArrayList<>();

		sortPeopleByHeight(people);

		for (int[] person : people) {
			result.add(person[1], person);
		}

		return result.toArray(new int[people.length][2]);
	}

}
