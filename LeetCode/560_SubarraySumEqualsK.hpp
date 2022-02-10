#include <unordered_map>
#include <vector>

class Solution
{
  public:
    int subarraySum(std::vector<int> &nums, int k);
};

int Solution::subarraySum(std::vector<int> &nums, int k)
{
    int n = nums.size(), count = 0, currentPrefixSum = 0;
    std::unordered_map<int, int> prefixSumArray;

    prefixSumArray[currentPrefixSum]++;

    for (int i = 0; i < n; i++)
    {
        currentPrefixSum += nums[i];
        count += prefixSumArray[currentPrefixSum - k];
        prefixSumArray[currentPrefixSum]++;
    }

    return count;
}