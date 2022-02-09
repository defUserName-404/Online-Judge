#include <algorithm>
#include <vector>

class Solution
{
    std::vector<int> digits;
    void getDigits(int n);

  public:
    int minimumSum(int num);
};

void Solution::getDigits(int x)
{
    while (x > 0)
    {
        digits.push_back(x % 10);
        x /= 10;
    }
}

int Solution::minimumSum(int num)
{
    getDigits(num);
    std::sort(digits.begin(), digits.end());

    return (digits[0] * 10 + digits[3] + digits[1] * 10 + digits[2]);
}