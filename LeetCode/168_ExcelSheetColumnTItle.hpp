#include <iostream>

class Solution
{
  public:
    std::string convertToTitle(int columnNumber);
};

std::string Solution::convertToTitle(int columnNumber)
{
    std::string ans;

    while (columnNumber)
    {
        columnNumber--;
        int rem = columnNumber % 26;
        ans += (rem + 65);
        columnNumber /= 26;
    }

    std::reverse(ans.begin(), ans.end());

    return ans;
}