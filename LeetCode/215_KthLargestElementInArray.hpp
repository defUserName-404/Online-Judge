#include <algorithm>
#include <vector>

class Solution
{
  public:
    int findKthLargest(std::vector<int> &nums, int k);
};

int Solution::findKthLargest(std::vector<int> &nums, int k)
{
    std::sort(nums.rbegin(), nums.rend());

    return nums[k - 1];
}