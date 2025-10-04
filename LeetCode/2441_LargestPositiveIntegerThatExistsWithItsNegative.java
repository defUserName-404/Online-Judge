import java.util.HashSet;
import java.util.Set;

class Solution {
    public int findMaxK(int[] nums) {
        Set<Integer> integerSet = new HashSet<>();
        int result = -1;
        for (final int num : nums) {
            integerSet.add(num);
            if (integerSet.contains(-num)) {
                result = Math.max(result, Math.abs(num));
            }
        }
        return result;
    }
}