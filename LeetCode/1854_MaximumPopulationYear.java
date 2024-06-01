class Solution {

	public int maximumPopulation(int[][] logs) {
		int[] populationChange = new int[2051 - 1950 + 1];
		int maxPopulation = 0, maxPopulationYear = 0, currentPopulation = 0;
		for (int[] log : logs) {
			populationChange[log[0] - 1950]++;
			populationChange[log[1] - 1950]--;
		}
		for (int year = 1950; year <= 2050; year++) {
			currentPopulation += populationChange[year - 1950];
			if (currentPopulation > maxPopulation) {
				maxPopulation = currentPopulation;
				maxPopulationYear = year;
			}
		}
		return maxPopulationYear;
	}

}
