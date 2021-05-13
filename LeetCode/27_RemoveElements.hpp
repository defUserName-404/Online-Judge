#include <iostream>
#include <vector>

class Solution
{
  public:
    int removeElement(std::vector<int> &nums, int val)
    {
        int n = nums.size();
        std::vector<int> result;

        for (int i = 0; i < n; i++)
            if (nums[i] != val)
                result.push_back(nums[i]);

        int len = result.size();

        for (int i = 0; i < len; i++)
            nums[i] = result[i];

        return len;
    }
};