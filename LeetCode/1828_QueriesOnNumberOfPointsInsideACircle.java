class Solution {
    public int[] countPoints(int[][] points, int[][] queries) {
        int[] res = new int[queries.length];
        for (int i = 0; i < queries.length; i++) {
            int count = 0;
            for (int[] point : points) {
                if ((point[0] - queries[i][0]) * (point[0] - queries[i][0]) + (point[1] - queries[i][1]) * (point[1] - queries[i][1]) <= queries[i][2] * queries[i][2]) {
                    count++;
                }
            }
            res[i] = count;
        }
        return res;
    }
}