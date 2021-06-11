#include <vector>

class Solution
{
  public:
    std::vector<bool> kidsWithCandies(std::vector<int> &candies, int extraCandies);
};

std::vector<bool> Solution::kidsWithCandies(std::vector<int> &candies, int extraCandies)
{
    auto currentMaxIter = std::max_element(candies.begin(), candies.end());
    int currentMaxElement = *currentMaxIter;

    std::vector<bool> result;

    for (int &x : candies)
        result.push_back((x + extraCandies >= currentMaxElement) ? true : false);

    return result;
}