#include <iostream>
#include <stack>

class Solution
{
  public:
    int countSegments(std::string s);
};

int Solution::countSegments(std::string s)
{
    int Count = 0;
    int n = s.size();

    for (int i = 1; i < n; i++)
        if (s[i - 1] == ' ' and s[i] != ' ')
            Count++;

    if (s[0] != ' ' and n != 0)
        Count++;

    return Count;
}