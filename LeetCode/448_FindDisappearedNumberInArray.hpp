#include <set>
#include <vector>

// need to optimize

class Solution
{
  public:
    std::vector<int> findDisappearedNumbers(std::vector<int> &nums);
};

std::vector<int> Solution::findDisappearedNumbers(std::vector<int> &nums)
{
    std::set<int> Count;

    int n = nums.size();

    for (int x : nums)
        Count.insert(x);

    std::vector<int> result;

    for (int i = 1; i <= n; i++)
        if (!Count.count(i))
            result.push_back(i);

    return result;
}
