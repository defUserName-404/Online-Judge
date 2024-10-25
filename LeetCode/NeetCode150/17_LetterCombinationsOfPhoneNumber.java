package NeetCode150;

import java.util.ArrayList;
import java.util.List;

class Solution {
    private final String[] map = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    private final List<String> result = new ArrayList<>();

    public List<String> letterCombinations(String digits) {
        if (digits.isEmpty()) {
            return result;
        }
        backtrack(new StringBuilder(), digits, 0);
        return result;
    }

    private void backtrack(StringBuilder combination, String digits, int index) {
        if (index == digits.length()) {
            result.add(combination.toString());
            return;
        }
        int digit = digits.charAt(index) - '0';
        String letters = map[digit];
        for (char letter : letters.toCharArray()) {
            combination.append(letter);
            backtrack(combination, digits, index + 1);
            combination.deleteCharAt(combination.length() - 1);
        }
    }
}