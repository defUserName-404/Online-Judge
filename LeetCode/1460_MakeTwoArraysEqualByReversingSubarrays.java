class Solution {
    public boolean canBeEqual(int[] target, int[] arr) {
        int[] count = new int[1001];
        for (final int num : target) {
            count[num]++;
        }
        for (final int num : arr) {
            count[num]--;
            if (count[num] < 0) {
                return false;
            }
        }
        return true;
    }
}