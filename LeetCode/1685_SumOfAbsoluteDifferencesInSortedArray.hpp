#include <vector>

class Solution
{
  public:
    std::vector<int> getSumAbsoluteDifferences(std::vector<int> &nums);
};

std::vector<int> Solution::getSumAbsoluteDifferences(std::vector<int> &nums)
{
    int n = nums.size();
    
    std::vector<int> result;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;

        for (int j = 0; j < n; j++)
            sum += (abs(nums[i] - nums[j]));

        result.push_back(sum);
    }

    return result;
}