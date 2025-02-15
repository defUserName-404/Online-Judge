import java.util.Arrays;
import java.util.Stack;

class Solution {
    public static int[] addArrays(int[] a, int[] b) {
        int sum1 = 0, sum2 = 0;
        for (int i : a) {
            sum1 = sum1 * 10 + i;
        }
        for (int i : b) {
            sum2 = sum2 * 10 + i;
        }
        System.out.println(sum1);
        System.out.println(sum2);
        long finalSum = sum1 + sum2;
        int length = String.valueOf(finalSum).length();
        System.out.println(finalSum);
        Stack<Integer> result = new Stack<>();
        for (int i = length - 1; i >= 0; i--) {
            result.add((int) (finalSum % 10));
            finalSum /= 10;
        }
        return result.stream().mapToInt(Integer::intValue).toArray();
    }

    public static void main(String[] args) {
        System.out.println("result" + Arrays.toString(addArrays(new int[]{4, 3, 6, 7, 9, 9, 1, 7, 8}, new int[]{7, 5, 8, 9})));
    }
}
