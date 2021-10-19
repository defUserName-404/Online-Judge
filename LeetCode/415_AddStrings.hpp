#include <iostream>

class Solution
{
    int sum(char x, char y, int carry)
    {
        return ((x - '0') + (y - '0') + carry);
    }

  public:
    std::string addStrings(std::string num1, std::string num2);
};

std::string Solution::addStrings(std::string num1, std::string num2)
{
    std::string ans;
    int m = num1.size(), n = num2.size();
    int carry = 0;

    for (int i = 1; i <= std::max(m, n); i++)
    {
        int x;

        if (i > m)
            x = sum('0', num2[n - i], carry);
        else if (i > n)
            x = sum(num1[m - i], '0', carry);
        else
            x = sum(num1[m - i], num2[n - i], carry);

        if (x > 9)
            x -= 10, carry = 1;
        else
            carry = 0;

        ans += (x + '0');
    }

    if (carry)
        ans += '1';

    std::reverse(ans.begin(), ans.end());

    return ans;
}