import java.util.Arrays;

class Solution {

    // Solution 1: sorting using custom comparator
    public int[][] kClosest(int[][] points, int k) {
        Arrays.sort(points, (point1, point2) -> (calculateDistanceFromOriginSquared(point1)) - (calculateDistanceFromOriginSquared(point2)));
        return Arrays.copyOfRange(points, 0, k);
    }

    private int calculateDistanceFromOriginSquared(int[] point) {
        return (point[0] * point[0] + point[1] * point[1]);
    }
}