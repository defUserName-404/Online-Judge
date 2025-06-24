import java.util.HashMap;
import java.util.Map;

class Solution {
    public String customSortString(String order, String s) {
        Map<Character, Integer> map = new HashMap<>();
        for (int i = 0; i < order.length(); i++) {
            map.put(order.charAt(i), i);
        }
        char[] chars = s.toCharArray();
        for (int i = 0; i < chars.length; i++) {
            if (map.containsKey(chars[i])) {
                char temp = chars[i];
                chars[i] = chars[map.get(chars[i])];
                chars[map.get(chars[i])] = temp;
            }
        }
        return String.valueOf(chars);
    }
}