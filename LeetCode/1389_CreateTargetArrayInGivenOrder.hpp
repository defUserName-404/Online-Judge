#include <vector>

class Solution
{
  public:
    std::vector<int> createTargetArray(std::vector<int> &nums, std::vector<int> &index);
};

std::vector<int> Solution::createTargetArray(std::vector<int> &nums, std::vector<int> &index)
{
    int n = nums.size();
    std::vector<int> target(n);

    for (int i = 0; i < n; i++)
        target.insert(target.begin() + index[i], nums[i]);

    return target;
}