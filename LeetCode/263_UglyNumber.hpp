#include <vector>

class Solution
{
    const std::vector<int> uglyNums = {2, 3, 5};

  public:
    bool isUgly(int n);
};

bool Solution::isUgly(int n)
{
    for (int i = 0; n != 0 && i < uglyNums.size();)
    {
        if (n % uglyNums[i])
        {
            i++;
            continue;
        }

        n /= uglyNums[i];
    }

    return n == 1;
}