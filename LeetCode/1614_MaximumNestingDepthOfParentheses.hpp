#include <iostream>

class Solution
{
  public:
    int maxDepth(std::string s);
};

int Solution::maxDepth(std::string s)
{
    int maxDepth = 0, currentDepth = 0;

    for (const char &ch : s)
    {
        if (ch == '(')
            ++currentDepth;
        else if (ch == ')')
            --currentDepth;

        maxDepth = std::max(maxDepth, currentDepth);
    }

    return maxDepth;
}