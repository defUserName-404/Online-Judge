class Solution {
    public int minimumSwap(String s1, String s2) {
        int x = 0, y = 0;
        for (int i = 0; i < s1.length(); i++) {
            if (s1.charAt(i) == 'x' && s2.charAt(i) == 'y') x++;
            if (s1.charAt(i) == 'y' && s2.charAt(i) == 'x') y++;
        }
        if ((x + y) % 2 == 1) return -1;
        return x / 2 + y / 2 + x % 2 + y % 2;
    }
}