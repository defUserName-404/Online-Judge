#include <unordered_set>
#include <vector>

class Solution
{
  public:
    int distributeCandies(std::vector<int> &candyType);
};

int Solution::distributeCandies(std::vector<int> &candyType)
{
    std::unordered_set<int> types(candyType.begin(), candyType.end());

    return std::min(types.size(), candyType.size() / 2);
}