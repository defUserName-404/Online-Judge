#include <iostream>

class Solution
{
  public:
    int balancedStringSplit(std::string s);
};

int Solution::balancedStringSplit(std::string s)
{
    int current = 0, count = 0;

    for (const char &ch : s)
    {
        (ch == 'L') ? current-- : current++;

        if (current == 0)
            count++;
    }

    return count;
}