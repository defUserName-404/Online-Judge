#include <vector>
#include <unordered_set>

class Solution
{
  public:
    std::vector<int> singleNumber(const std::vector<int> &nums);
};

std::vector<int> Solution::singleNumber(const std::vector<int> &nums)
{
    std::unordered_multiset<int> list(nums.begin(), nums.end());
    std::vector<int> ans;

    for (auto it : list)
        if (list.count(it) == 1)
            ans.push_back(it);

    return ans;
}