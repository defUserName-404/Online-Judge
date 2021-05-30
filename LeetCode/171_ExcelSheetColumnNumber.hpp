#include <iostream>
#include <cmath>

class Solution
{
  public:
    int titleToNumber(std::string columnTitle);
};

int Solution::titleToNumber(std::string columnTitle)
{
    int x = 0;
    int n = columnTitle.size();
    int num = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        int ch = columnTitle[i] - 'A' + 1;
        num += (ch * pow(26, x));
        x++;
    }

    return num;
}