#include <unordered_set>
#include <vector>

class Solution
{
  public:
    int countKDifference(std::vector<int> &nums, int k);
};

int Solution::countKDifference(std::vector<int> &nums, int k)
{
    int n = nums.size();
    std::unordered_multiset<int> elements(nums.begin(), nums.end());
    int count = 0;

    for (int i = 0; i < n; i++)
        count += (elements.count(nums[i] - k));

    return count;
}