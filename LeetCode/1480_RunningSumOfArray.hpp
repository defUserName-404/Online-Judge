#include <vector>

class Solution
{
  public:
    std::vector<int> runningSum(std::vector<int> &nums);
};

std::vector<int> Solution::runningSum(std::vector<int> &nums)
{
    int n = nums.size();

    for (int i = 1; i < n; i++)
        nums[i] += nums[i - 1];

    return nums;
}