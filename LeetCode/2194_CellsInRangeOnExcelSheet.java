import java.util.ArrayList;
import java.util.List;

class Solution {

	public List<String> cellsInRange(String s) {
		List<String> sList = new ArrayList<>();
		char row1 = s.charAt(1),
				row2 = s.charAt(4),
				colum1 = s.charAt(0),
				colum2 = s.charAt(3);

		for (char i = colum1; i <= colum2; i++) {
			for (char j = row1; j <= row2; j++) {
				String cell = String.valueOf(i) + j;

				sList.add(cell);
			}
		}

		return sList;
	}

}
