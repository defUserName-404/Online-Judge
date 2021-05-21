#include <iostream>

class Solution
{
  public:
    std::string toLowerCase(std::string s);
};

std::string Solution :: toLowerCase(std::string s)
{
    int n = s.size();

    for (int i = 0; i < n; i++)
        if (isupper(s[i]))
            s[i] += 32;

    return s;
}