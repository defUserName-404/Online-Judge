class Solution {
	public int convertTime(String current, String correct) {
		String[] currentParts = current.split(":");
		String[] correctParts = correct.split(":");

		int currentHr = Integer.parseInt(currentParts[0]);
		int currentMin = Integer.parseInt(currentParts[1]);
		int correctHr = Integer.parseInt(correctParts[0]);
		int correctMin = Integer.parseInt(correctParts[1]);

		int timeDiff = (correctHr * 60 + correctMin) - (currentHr * 60 + currentMin);
		int count = 0;

		while (timeDiff > 0) {
			count++;
			if (timeDiff >= 60)
				timeDiff -= 60;
			else if (timeDiff >= 15)
				timeDiff -= 15;
			else if (timeDiff >= 5)
				timeDiff -= 5;
			else if (timeDiff >= 1)
				timeDiff -= 1;
		}

		return count;
	}
}