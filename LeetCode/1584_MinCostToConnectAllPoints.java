import java.util.PriorityQueue;

class Solution {

	static class Pair implements Comparable<Pair> {

		int v;
		int cost;

		Pair(int v, int cost) {
			this.v = v;
			this.cost = cost;
		}

		@Override
		public int compareTo(Pair o) {
			return this.cost - o.cost;
		}

	}

	private int manhattanDistance(int[] p1, int[] p2) {
		return Math.abs(p1[0] - p2[0]) + Math.abs(p1[1] - p2[1]);
	}

	private void updateDistances(int[][] points, int curr, boolean[] visited, int[] minDist,
	                             PriorityQueue<Pair> pq
	                            ) {
		for (int j = 0; j < points.length; j++) {
			if (!visited[j]) {
				int dist = manhattanDistance(points[curr], points[j]);
				if (dist < minDist[j]) {
					minDist[j] = dist;
					pq.add(new Pair(j, dist));
				}
			}
		}
	}

	public int minCostConnectPoints(int[][] points) {
		int n = points.length;
		boolean[] visited = new boolean[n];
		int[] minDist = new int[n];
		Arrays.fill(minDist, Integer.MAX_VALUE);
		minDist[0] = 0;

		PriorityQueue<Pair> pq = new PriorityQueue<>();
		pq.add(new Pair(0, 0));

		int totalCost = 0;
		int edgesUsed = 0;

		while (edgesUsed < n) {
			Pair curr = pq.poll();
			if (visited[curr.v]) {
				continue;
			}

			visited[curr.v] = true;
			totalCost += curr.cost;
			edgesUsed++;

			updateDistances(points, curr.v, visited, minDist, pq);
		}

		return totalCost;
	}

}
