#include <vector>

class Solution
{
  public:
    int findMaxConsecutiveOnes(std::vector<int> &nums);
};

int Solution::findMaxConsecutiveOnes(std::vector<int> &nums)
{
    int current, global;

    current = global = 0;

    for (int x : nums)
    {
        if (x)
            ++current;
        else
            current = 0;

        global = std::max(current, global);
    }

    return global;
}