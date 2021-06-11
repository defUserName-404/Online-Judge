#include <vector>

class Solution
{
  public:
    std::vector<int> shuffle(std::vector<int> &nums, int n);
};

std::vector<int> Solution::shuffle(std::vector<int> &nums, int n)
{
    std::vector<int> reshuffledArray;

    for (int i = 0, j = n; i < n; i++, j++)
    {
        reshuffledArray.push_back(nums[i]);
        reshuffledArray.push_back(nums[j]);
    }

    return reshuffledArray;
}