#include <vector>

class Solution
{
  public:
    int minOperations(std::vector<int> &nums);
};

int Solution::minOperations(std::vector<int> &nums)
{
    int n = nums.size();
    int Count = 0;

    for (int i = 1; i < n; i++)
    {
        if (nums[i] <= nums[i - 1])
        {
            int to_be_added = (nums[i - 1] - nums[i] + 1);
            Count += to_be_added;
            nums[i] += to_be_added;
        }
    }

    return Count;
}