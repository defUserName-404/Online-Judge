#include <vector>

class Solution
{
  public:
    int findLengthOfLCIS(std::vector<int> &nums);
};

int Solution::findLengthOfLCIS(std::vector<int> &nums)
{
    int n = nums.size();
    int starting = 0, longest = 0;

    for (int i = 0; i < n; i++)
    {
        if (i > 0 && nums[i - 1] >= nums[i])
            starting = i;
        longest = std::max(longest, i - starting + 1);
    }

    return longest;
}