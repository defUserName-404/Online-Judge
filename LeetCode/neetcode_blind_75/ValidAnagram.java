import java.util.HashMap;
import java.util.Map;

class Solution {
    public boolean isAnagram(String s, String t) {
        Map<Character, Integer> characterIntegerMap = new HashMap<>();
        for (final char ch : s.toCharArray()) {
            characterIntegerMap.put(ch, characterIntegerMap.getOrDefault(ch, 0) + 1);
        }
        for (final char ch : t.toCharArray()) {
            characterIntegerMap.put(ch, characterIntegerMap.getOrDefault(ch, 0) - 1);
        }
        for (final Map.Entry<Character, Integer> map : characterIntegerMap.entrySet()) {
            final int value = map.getValue();
            if (value != 0) {
                return false;
            }
        }
        return true;
    }

}
