import java.util.HashMap;
import java.util.Map;

class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> indices = new HashMap<>();
        int[] result = new int[2];
        int n = nums.length;
        for (int i = 0; i < n; i++) {
            int leftTarget = target - nums[i];
            if (indices.containsKey(leftTarget)) {
                result[0] = indices.get(leftTarget);
                result[1] = i;
            }
            indices.put(nums[i], i);
        }
        return result;
    }
}