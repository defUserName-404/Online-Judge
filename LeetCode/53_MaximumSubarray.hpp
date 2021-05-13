#include <iostream>
#include <vector>

class Solution
{
  public:
    int maxSubArray(std::vector<int> &nums)
    {
        int global_max = nums[0];
        int current_max = nums[0];

        int n = nums.size();

        for (int i = 1; i < n; i++)
        {
            current_max = std::max(nums[i], current_max + nums[i]);
            global_max = std::max(current_max, global_max);
        }

        return global_max;
    }
};