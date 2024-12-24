import java.util.Stack;

class Solution {
    public int calPoints(String[] operations) {
        Stack<Integer> stack = new Stack<>();
        int sum = 0;
        for (String operation : operations) {
            switch (operation) {
                case "C" -> sum -= stack.pop();
                case "D" -> {
                    stack.push(stack.peek() * 2);
                    sum += stack.peek();
                }
                case "+" -> {
                    int top = stack.pop();
                    int second = stack.pop();
                    stack.push(second);
                    stack.push(top);
                    stack.push(top + second);
                    sum += top + second;
                }
                default -> {
                    stack.push(Integer.parseInt(operation));
                    sum += Integer.parseInt(operation);
                }
            }
        }
        return sum;
    }
}