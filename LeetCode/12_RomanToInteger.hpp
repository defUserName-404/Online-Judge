#include <algorithm>
#include <iostream>
#include <map>

class Solution
{
    std::map<int, std::string, std::greater<int>> RomanNumerals =
        {{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};

    std::string ans;

  public:
    std::string intToRoman(int num);
};

std::string Solution::intToRoman(int num)
{
    for (const auto &it : RomanNumerals)
    {
        int x = num / it.first;
        num -= (x * it.first);

        for (int i = 0; i < x; i++)
            ans += it.second;
    }

    return ans;
}