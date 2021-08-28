#include <iostream>
#include <map>
#include <cmath>
#include <algorithm>

// ! Problem is partially solved
class Solution
{
    std::map < int, char, std::greater<int> > RomanNumerals =
          {{1000, 'M'}, {500, 'D'}, {100, 'C'}, {50, 'L'}, {10, 'X'}, {5, 'V'}, {1, 'I'}};
    std::string ans;

  public:
    std::string intToRoman(int num);
};

std::string Solution::intToRoman(int num)
{
    for (const auto &it : RomanNumerals)
    {
        int x = floor(num / it.first);
        num -= (x * it.first);

        for (int i = 0; i < x; i++)
            ans += it.second;
    }

    return ans;
}