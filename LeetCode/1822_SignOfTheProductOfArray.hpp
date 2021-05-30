#include <vector>

class Solution
{
  public:
    int arraySign(std::vector<int> &nums);
};

int Solution::arraySign(std::vector<int> &nums)
{
    int negative = 0, positive = 0;

    for (int x : nums)
    {
        if (x == 0)
            return 0;

        (x > 0) ? positive++ : negative++;
    }

    return (negative % 2 ? -1 : 1);
}