import java.util.Arrays;

class Solution {

	public int maximumUnits(int[][] boxTypes, int truckSize) {
		int max = 0, boxesOnTruck = 0;
		Arrays.sort(boxTypes, (a, b) -> Integer.compare(b[1], a[1]));

		for (int i = 0; i < boxTypes.length; i++) {
			int unit = boxTypes[i][1];
			int noOfBoxes = boxTypes[i][0];

			if (boxesOnTruck >= truckSize)
				break;

			int boxesStorable = (truckSize < noOfBoxes + boxesOnTruck)
					? truckSize - boxesOnTruck
					: noOfBoxes;
			max += boxesStorable * unit;
			boxesOnTruck += boxesStorable;
		}

		return max;
	}
}