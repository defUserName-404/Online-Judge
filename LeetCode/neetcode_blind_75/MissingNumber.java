import java.util.Arrays;

class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length;
        int targetSum = (n * (n + 1)) / 2;
        int currentSum = Arrays.stream(nums).sum();
        return targetSum - currentSum;
    }
}
