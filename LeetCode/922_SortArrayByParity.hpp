#include <vector>

class Solution
{
  public:
    std::vector<int> sortArrayByParityII(std::vector<int> &nums);
};

std::vector<int> Solution::sortArrayByParityII(std::vector<int> &nums)
{
    int n = nums.size();

    std::vector<int> result(n);

    int k = 0, j = 1;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] & 1)
        {
            result[j] = nums[i];
            j += 2;
        }
        else
        {
            result[k] = nums[i];
            k += 2;
        }
    }

    return result;
}