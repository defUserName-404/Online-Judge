#include <iostream>

class Solution
{
    int binarySum(char x, char y, bool carry)
    {
        return ((x - '0') + (y - '0') + carry);
    }

  public:
    std::string addBinary(std::string a, std::string b);
};

std::string Solution::addBinary(std::string a, std::string b)
{
    std::string ans;
    int m = a.size(), n = b.size();
    bool carry = false;
    bool terminatingCondition = std::min(m, n);
    int i = 1;

    while (true)
    {
        int x = binarySum(a[m - i], b[n - i], carry);

        if (x == 2)
            x = 1, carry = true;

        ans += (x + '0');

        i++;

        if (i == terminatingCondition)
            break;
    }

    if (carry)
        ans += '1';

    std::reverse(ans.begin(), ans.end());

    return ans;
}