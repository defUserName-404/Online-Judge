import java.util.ArrayList;
import java.util.List;

class Solution {
    public List<String> letterCasePermutation(String s) {
        List<String> result = new ArrayList<>();
        backtrack(result, new StringBuilder(), s, 0);
        return result;
    }

    private void backtrack(List<String> result, StringBuilder current, String s, int index) {
        if (index == s.length()) {
            result.add(current.toString());
            return;
        }
        char c = s.charAt(index);
        if (Character.isLetter(c)) {
            current.append(Character.toLowerCase(c));
            backtrack(result, current, s, index + 1);
            current.setLength(current.length() - 1);
            current.append(Character.toUpperCase(c));
        } else {
            current.append(c);
        }
        backtrack(result, current, s, index + 1);
        current.setLength(current.length() - 1);
    }
}