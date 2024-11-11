import java.util.PriorityQueue;

class Solution {

    // * Solution 1: sorting using custom comparator
//    public int[][] kClosest(int[][] points, int k) {
//        Arrays.sort(points, (point1, point2) -> calculateDistanceFromOriginSquared(point1) - calculateDistanceFromOriginSquared(point2));
//        return Arrays.copyOfRange(points, 0, k);
//    }
//
    private int calculateDistanceFromOriginSquared(int[] point) {
        return (point[0] * point[0] + point[1] * point[1]);
    }

    //  * Solution 2: using max heap
    public int[][] kClosest(int[][] points, int k) {
        PriorityQueue<int[]> pointsMaxHeap = new PriorityQueue<>((point1, point2) -> calculateDistanceFromOriginSquared(point2) - calculateDistanceFromOriginSquared(point1));
        for (final int[] point : points) {
            pointsMaxHeap.offer(point);
            if (pointsMaxHeap.size() > k) {
                pointsMaxHeap.poll();
            }
        }
        int[][] result = new int[k][2];
        while (k-- != 0) {
            result[k] = pointsMaxHeap.poll();
        }
        return result;
    }
}