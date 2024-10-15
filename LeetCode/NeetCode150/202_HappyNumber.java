import java.util.HashSet;
import java.util.Set;

class Solution {
    public boolean isHappy(int n) {
        Set<Integer> visited = new HashSet<>();
        while (!visited.contains(n)) {
            visited.add(n);
            n = getSquareSum(n);
            if (n == 1) {
                return true;
            }
        }
        return false;
    }

    private int getSquareSum(int n) {
        int squaredSum = 0;
        while (n > 0) {
            int currentDigit = n % 10;
            squaredSum += currentDigit * currentDigit;
            n /= 10;
        }
        return squaredSum;
    }
}