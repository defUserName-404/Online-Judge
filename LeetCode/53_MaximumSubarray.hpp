#include <iostream>
#include <vector>

class Solution
{
  public:
    int maxSubArray(std::vector<int> &nums)
    {
        int global_max = nums[0];
        int current_max = nums[0];

        for (int i = 1; i < nums.size(); i++)
        {
            current_max = std::max(nums[i], current_max + nums[i]);
            global_max = std::max(current_max, global_max);
        }

        return global_max;
    }
};