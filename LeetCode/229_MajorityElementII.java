import java.util.HashMap;
import java.util.List;
import java.util.Map;

class Solution {
    public List<Integer> majorityElement(int[] nums) {
        Map<Integer, Integer> occurrence = new HashMap<>();
        int countThreshold = nums.length / 3;
        for (final int num : nums) {
            occurrence.put(num, occurrence.getOrDefault(num, 0) + 1);
        }
        return occurrence.keySet()
                .stream()
                .filter(element -> occurrence.get(element) > countThreshold)
                .toList();
    }
}