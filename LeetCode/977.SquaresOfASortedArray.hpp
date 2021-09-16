#include <vector>

class Solution
{
  public:
    std::vector<int> sortedSquares(std::vector<int> &nums);
};

//* Brute Force Trivial solution *//
// std::vector<int> Solution::sortedSquares(std::vector<int> &nums)
// {
//     for (int &x : nums)
//         x *= x;

//     std::sort(nums.begin(), nums.end());

//     return nums;
// }

std::vector<int> Solution::sortedSquares(std::vector<int> &nums)
{
    int left = 0, right = nums.size() - 1;
    int index = right;

    std::vector<int> ans(index + 1);

    while (left <= right)
    {
        if (abs(nums[left]) > abs(nums[right]))
        {
            ans[index] = nums[left] * nums[left];
            left++;
        }

        else
        {
            ans[index] = nums[right] * nums[right];
            right--;
        }

        index--;
    }

    return ans;
}