#include <iostream>

class Solution
{
  public:
    std::string replaceDigits(std::string &s);
};

std::string Solution::replaceDigits(std::string &s)
{
    int n = s.size();

    for (int i = 1; i < n; i += 2)
        s[i] = s[i - 1] + (s[i] - '0');

    return s;
}