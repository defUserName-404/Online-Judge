#include <vector>
#include <set>

class Solution
{
  public:
    std::vector<int> sortedSquares(std::vector<int> &nums);
};

std::vector<int> Solution::sortedSquares(std::vector<int> &nums)
{
    std::multiset<int> absSquareNums;

	for (int &x : nums)
        absSquareNums.insert(x * x);

    return std::vector<int>(absSquareNums.begin(), absSquareNums.end());
}