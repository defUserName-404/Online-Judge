#include <cmath>
#include <set>
#include <vector>

class Solution
{
  public:
    int findFinalValue(std::vector<int> &nums, int original);
};

int Solution::findFinalValue(std::vector<int> &nums, int original)
{
    std::set<int> factorsFound;
    factorsFound.insert(1);

    for (const auto x : nums)
        if (x % original == 0)
            factorsFound.insert(x / original);

    int previous = 1;

    for (const auto it : factorsFound)
    {
        if (it == previous)
            continue;

        if (it / previous != 2)
            break;

        previous = it;
    }

    if (nums.size() == factorsFound.size())
        return original * pow(2, previous);

    return original * pow(2, previous - 1);
}