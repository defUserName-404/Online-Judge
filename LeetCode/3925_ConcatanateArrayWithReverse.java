class Solution {
    public int[] concatWithReverse(int[] nums) {
        int size = nums.length;
        int[] result = Arrays.copyOf(nums, size * 2);

    int j = 0;
    for (int i = nums.length; i < size * 2; i++) {
        result[i] = nums[size - j - 1];
        j++;
    }

    return result;
    }
}
