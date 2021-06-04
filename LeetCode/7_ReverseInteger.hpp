#include <iostream>

class Solution
{
  public:
    int reverse(int x);
};

int Solution::reverse(int x)
{
    if (INT32_MIN < x and x > INT32_MAX)
        return 0;

    int sign = (x < 0) ? -1 : 1;
    int result = 0, num = abs(x);

    while (num > 0)
    {
        if (result > INT32_MAX / 10)
            return 0;

        result = (result * 10) + (num % 10);
        num = int(num / 10);
    }

    return result * sign;
}