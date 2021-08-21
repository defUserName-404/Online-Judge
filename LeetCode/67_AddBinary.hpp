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
    int i = 1;

    while (i <= std::max(m, n))
    {
        int x;

        if (i > m)
            x = binarySum('0', b[n - i], carry);
        else if (i > n)
            x = binarySum(a[m - i], '0', carry);
        else
            x = binarySum(a[m - i], b[n - i], carry);

        if (x > 1)
            x = x - 2, carry = true;
        else
            carry = false;

        ans += (x + '0');

        i++;
    }

    if (carry)
        ans += '1';

    std::reverse(ans.begin(), ans.end());

    return ans;
}