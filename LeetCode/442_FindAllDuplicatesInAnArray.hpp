#include <vector>
#include <unordered_set>

class Solution
{
  public:
    std::vector<int> findDuplicates(std::vector<int> &nums);
};

std::vector<int> Solution::findDuplicates(std::vector<int> &nums)
{
    std::unordered_set<int> Count;
    std::vector<int> result;

    for (int &x : nums)
    {
        if (Count.count(x))
            result.push_back(x);
        else
            Count.insert(x);
    }

    return result;
}