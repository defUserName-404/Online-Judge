#include <cmath>
#include <vector>

class Solution
{
  public:
    std::vector<int> rearrangeArray(std::vector<int> &nums);
};

std::vector<int> Solution::rearrangeArray(std::vector<int> &nums)
{
    int n = nums.size(), evenIdx = 0, oddIdx = 1;
    std::vector<int> rearrangedArray(n);

    for (int i = 0; i < n; i++)
    {
        if (nums[i] > 0)
            rearrangedArray[evenIdx] = nums[i], evenIdx += 2;
        else
            rearrangedArray[oddIdx] = nums[i], oddIdx += 2;
    }

    return rearrangedArray;
}