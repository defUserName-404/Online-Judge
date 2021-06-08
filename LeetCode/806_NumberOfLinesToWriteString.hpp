#include <cmath>
#include <iostream>
#include <vector>

class Solution
{
  public:
    std::vector<int> numberOfLines(std::vector<int> &widths, std::string s);
};

std::vector<int> Solution::numberOfLines(std::vector<int> &widths, std::string s)
{
    int currentWidth = 0, lines = 1;

    for (const char &ch : s)
    {
        int value = widths[ch - 'a'];

        if (currentWidth + value <= 100)
            currentWidth += value;

        else
            lines++, currentWidth = value;
    }
    
    return {lines, currentWidth};
}