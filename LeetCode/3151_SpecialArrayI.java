class Solution {

    private boolean isEven(int x) {
        return x % 2 == 0;
    }

    public boolean isArraySpecial(int[] nums) {
        for (int i = 0; i < nums.length - 1; i++) {
            if ((isEven(nums[i]) && isEven(nums[i + 1])) || (!isEven(nums[i]) && !isEven(nums[i + 1]))) {
                return false;
            }
        }
        return true;
    }
}