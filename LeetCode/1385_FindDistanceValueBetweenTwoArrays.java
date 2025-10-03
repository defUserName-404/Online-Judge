import java.util.Arrays;

class Solution {
    public int findTheDistanceValue(int[] arr1, int[] arr2, int d) {
        Arrays.sort(arr2);
        int count = 0;
        for (final int num : arr1) {
            if (notInRange(arr2, num + d, num - d)) {
                count++;
            }
        }
        return count;
    }

    private boolean notInRange(int[] arr2, int max, int min) {
        int left = 0, right = arr2.length - 1;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (arr2[mid] >= min && arr2[mid] <= max) {
                return false;
            }
            if (arr2[mid] < min) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return true;
    }
}