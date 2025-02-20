class Solution {
    public int minimumChairs(String s) {
        int currentCount = 0, maxCount = 0;
        for (final char c : s.toCharArray()) {
            currentCount += c == 'E' ? 1 : -1;
            maxCount = Math.max(maxCount, currentCount);
        }
        return maxCount;
    }
}