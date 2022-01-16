#include <vector>

class Solution
{
  public:
    std::vector<int> sortedSquares(std::vector<int> &nums);
};

std::vector<int> Solution::sortedSquares(std::vector<int> &nums)
{
    int left = 0, right = nums.size() - 1, idx = right;
    std::vector<int> squaredNums(idx + 1);

    while (left <= right)
    {
        if (abs(nums[left]) > abs(nums[right]))
        {
            squaredNums[idx] = nums[left] * nums[left];
            left++;
        }

        else
        {
            squaredNums[idx] = nums[right] * nums[right];
            right--;
        }

        idx--;
    }

    return squaredNums;
}