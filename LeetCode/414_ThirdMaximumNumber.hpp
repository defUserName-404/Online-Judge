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

    if (uniqueNums.size() >= 3)
        std::advance(iter, 2);

    return *iter;
}