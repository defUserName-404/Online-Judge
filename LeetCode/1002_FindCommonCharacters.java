import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

class Solution {

    public List<String> commonChars(String[] words) {
        Map<Character, Integer> map = new HashMap<>();
        for (var c : words[0].toCharArray()) {
            map.put(c, map.getOrDefault(c, 0) + 1);
        }
        for (int i = 1; i < words.length; i++) {
            Map<Character, Integer> temp = new HashMap<>();
            for (var c : words[i].toCharArray()) {
                temp.put(c, temp.getOrDefault(c, 0) + 1);
            }
            for (var entry : map.entrySet()) {
                entry.setValue(Math.min(entry.getValue(), temp.getOrDefault(entry.getKey(), 0)));
            }
        }
        List<String> result = new ArrayList<>();
        for (var entry : map.entrySet()) {
            for (int i = 0; i < entry.getValue(); i++) {
                result.add(String.valueOf(entry.getKey()));
            }
        }
        return result;
    }

}