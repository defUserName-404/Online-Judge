#include <cmath>

class Solution
{
  public:
    int arrangeCoins(int n)
    {
        return floor((-1 + sqrt(1 + (long long)8 * n)) / 2);
    }
};