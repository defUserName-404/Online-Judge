#include <algorithm>
#include <vector>

// W/A

class Solution
{
  public:
    int largestSumAfterKNegations(std::vector<int> &nums, int k);
};

int Solution::largestSumAfterKNegations(std::vector<int> &nums, int k)
{
    std::sort(nums.begin(), nums.end());

    int sum = 0, negatives = 0;

    for (int &x : nums)
    {
        if (k != 0)
        {
            x = -x;
            k--;
        }
    }

    return sum;
}
