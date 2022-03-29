#include <vector>

class Solution
{
  public:
    std::vector<int> countBits(int n);
};

std::vector<int> Solution::countBits(int n)
{
    std::vector<int> ans;
    ans.push_back(0);

    for (int i = 1; i <= n; i++)
        ans.push_back(__builtin_popcount(i));

    return ans;
}