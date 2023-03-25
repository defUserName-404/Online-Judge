class Solution {

	public int hardestWorker(int n, int[][] logs) {
		int currentLongest = Integer.MIN_VALUE;
		int employee = 0;

		for (int i = 0; i < logs.length; i++) {
			int id = logs[i][0];
			int endTime = logs[i][1];
			int startTime = (i == 0) ? 0 : logs[i - 1][1];
			int workingTime = endTime - startTime;
			if (workingTime > currentLongest) {
				employee = id;
				currentLongest = workingTime;
			} else if (workingTime == currentLongest) {
				employee = Math.min(id, employee);
			}
		}
		return employee;
	}

}
