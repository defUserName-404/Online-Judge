#include <algorithm>
#include <vector>
#include <numeric>

// Not my solution

class Solution
{
  public:
    int minMoves(std::vector<int> &nums)
    {
        int n = nums.size();

        int m = *(std::min_element(nums.begin(), nums.end()));

        int sum = std::accumulate(nums.begin(), nums.end(), 0);

        return sum - n * m;
    }
};