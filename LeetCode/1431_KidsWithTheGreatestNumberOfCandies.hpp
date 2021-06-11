#include <vector>

class Solution
{
  public:
    std::vector<bool> kidsWithCandies(std::vector<int> &candies, int extraCandies);
};

std::vector<bool> Solution::kidsWithCandies(std::vector<int> &candies, int extraCandies)
{
    int currentMaxElement = *(std::max_element(candies.begin(), candies.end()));

    std::vector<bool> result;

    for (int &x : candies)
        result.push_back((x + extraCandies >= currentMaxElement) ? true : false);

    return result;
}