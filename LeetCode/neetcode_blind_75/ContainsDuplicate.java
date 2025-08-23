import java.util.HashMap;
import java.util.Map;

class Solution {
    public boolean hasDuplicate(int[] nums) {
        Map<Integer, Integer> numsOccurrences = new HashMap<>();
        for (int num : nums) {
            numsOccurrences.put(num, numsOccurrences.getOrDefault(num, 0) + 1);
            if (numsOccurrences.get(num) > 1) {
                return true;
            }
        }
        return false;
    }
}