#include <functional>
#include <set>
#include <vector>

class Solution
{
  public:
    int thirdMax(std::vector<int> &nums);
};

int Solution::thirdMax(std::vector<int> &nums)
{
    std::set<int, std::greater<int>> uniqueNums(nums.begin(), nums.end());

    auto iter = uniqueNums.begin();

    if (uniqueNums.size() > 2)
        for (int i = 0; i < 3; i++)
            iter++;

    return *iter;
}