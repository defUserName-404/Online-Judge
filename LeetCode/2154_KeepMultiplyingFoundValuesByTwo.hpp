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
    std::set<int> array(nums.begin(), nums.end());
    int n = array.size(), factor = 0, temp = original;

    for (int i = 0; i < n; i++)
    {
        if (!array.count(original * pow(2, i)))
            return original * pow(2, i);
        temp *= 2;
    }

    return temp;
}