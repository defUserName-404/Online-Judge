#include <algorithm>
#include <cmath>
#include <iostream>

class Solution
{
  public:
    std::string toHex(unsigned int num);
};

std::string Solution::toHex(unsigned int num)
{
    std::string hexadecimal;

    if (num == 0)
        return "0";

    while (num > 0)
    {
        int x = num % 16;
        //* converting the integer to character
        x += (x >= 10 ? ('a' - 10) : '0');
        num /= 16;
        hexadecimal += x;
    }

    std::reverse(hexadecimal.begin(), hexadecimal.end());

    return hexadecimal;
}