#include <cmath>
#include <set>
#include <vector>

class Solution
{
  public:
    int findPairs(std::vector<int> &nums, int k);
};

int Solution::findPairs(std::vector<int> &nums, int k)
{
    std::set<int> neededToPair(nums.begin(), nums.end());
    int count = 0;

    for (const auto it : neededToPair)
        if (neededToPair.count(abs(it - k)))
            count++;

    return count / 2;
}