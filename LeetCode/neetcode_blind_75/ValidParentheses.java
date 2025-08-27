import java.util.Map;
import java.util.Stack;

class Solution {
    public boolean isValid(String s) {
        Stack<Character> characterStack = new Stack<>();
        final var closeToOpen = Map.ofEntries(
                Map.entry(')', '('),
                Map.entry(']', '['),
                Map.entry('}', '{')
        );
        for (final char c : s.toCharArray()) {
            if (closeToOpen.containsKey(c)) {
                if (!characterStack.isEmpty() && characterStack.peek() == closeToOpen.get(c)) {
                    characterStack.pop();
                } else {
                    return false;
                }
            } else {
                characterStack.push(c);
            }
        }
        return characterStack.isEmpty();
    }
}
