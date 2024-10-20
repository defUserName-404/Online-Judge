import java.util.Arrays;

class Solution {

    public String[] findRelativeRanks(int[] score) {
        int n = score.length;
        int[][] scoreAndPosition = new int[n][2];
        for (int i = 0; i < n; i++) {
            scoreAndPosition[i] = new int[]{i, score[i]};
        }
        String[] ranks = new String[n];
        Arrays.sort(scoreAndPosition, (a, b) -> b[1] - a[1]);
        for (int i = 0; i < n; i++) {
            String rank = switch (i) {
                case 0 -> "Gold Medal";
                case 1 -> "Silver Medal";
                case 2 -> "Bronze Medal";
                default -> String.valueOf(i + 1);
            };
            ranks[scoreAndPosition[i][0]] = rank;
        }
        return ranks;
    }

}
