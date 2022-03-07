#include <algorithm>
#include <vector>

class Solution
{
  public:
    int minPairSum(std::vector<int> &nums);
};

int Solution::minPairSum(std::vector<int> &nums)
{
    std::sort(nums.begin(), nums.end());
    int n = nums.size();
    int current = 0, globalMin = 0;

    for (int i = 0; i < n; i++)
    {
        current = nums[i] + nums[n - i - 1];
		if (current > globalMin)
            globalMin = current;
    }

    return globalMin;
}