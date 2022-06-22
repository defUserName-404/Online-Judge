#include <vector>

class Solution
{
  public:
    int findMaxConsecutiveOnes(std::vector<int> &nums);
};

int Solution::findMaxConsecutiveOnes(std::vector<int> &nums)
{
    int current = 0, global = 0;

    for (int x : nums)
    {
        current = x ? current + 1 : 0;
        global = std::max(current, global);
    }

    return global;
}