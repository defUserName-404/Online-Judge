#include <algorithm>
#include <cmath>
#include <vector>

class Solution
{
  private:
    int totalDigits, totalZeros;
    std::vector<int> digits;
    void getDigits(long long x);
    long long getSmallest(bool);

  public:
    long long smallestNumber(long long num);
};

void Solution::getDigits(long long x)
{
    if (x < 0)
        x *= -1;

    while (x > 0)
    {
        digits.push_back(x % 10);
        x /= 10;
    }
}

long long Solution::getSmallest(bool isPositive)
{
    long long smallest = 0;

    if (isPositive)
    {
        std::sort(digits.begin(), digits.end());

        smallest += (digits[totalZeros] * pow(10, totalDigits - 1));

        for (int i = totalZeros + 1; i < totalDigits; i++)
            smallest += (digits[i] * pow(10, totalDigits - i - 1));
    }

    else
    {
        std::sort(digits.rbegin(), digits.rend());

        for (int i = 0; i < totalDigits; i++)
            smallest += (digits[i] * pow(10, totalDigits - i - 1));

        smallest *= -1;
    }

    return smallest;
}

long long Solution::smallestNumber(long long num)
{
    getDigits(num);

    totalDigits = digits.size();
    totalZeros = std::count(digits.begin(), digits.end(), 0);
    long long ans = 0;

    if (num > 0)
        ans = getSmallest(true);

    else if (num < 0)
        ans = getSmallest(false);

    return ans;
}