import java.util.Stack;

class Solution {

    // * O(n^2) solution
//    public int[] dailyTemperatures(int[] temperatures) {
//        int n = temperatures.length;
//        int[] daysAfterTemperatureIncrease = new int[n];
//        for (int i = 0; i < n - 1; i++) {
//            for (int j = i + 1; j < n; j++) {
//                if (temperatures[i] < temperatures[j]) {
//                    daysAfterTemperatureIncrease[i] = j - i;
//                    break;
//                }
//            }
//        }
//        return daysAfterTemperatureIncrease;
//    }

    public int[] dailyTemperatures(int[] temperatures) {
        int n = temperatures.length;
        Stack<Integer> dailyTeperaturesStack = new Stack<>();
        int[] daysAfterTemperatureIncrease = new int[n];
        for (int i = 0; i < n; i++) {
            while (!dailyTeperaturesStack.isEmpty() && temperatures[dailyTeperaturesStack.peek()] < temperatures[i]) {
                daysAfterTemperatureIncrease[dailyTeperaturesStack.peek()] = i - dailyTeperaturesStack.pop();
            }
            dailyTeperaturesStack.push(i);
        }
        return daysAfterTemperatureIncrease;
    }
}