#include <iostream>

class Solution
{
  public:
    int lengthOfLastWord(std::string);
};

int Solution::lengthOfLastWord(std::string s)
{
    int Count = 0;

    while (s.size())
    {
        int i = s.size() - 1;

        if (s[i] == ' ')
            s.erase(s.begin() + i);
        else
            break;
    }

    int n = s.size();
    
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == ' ')
            break;

        Count++;
    }

    return Count;
}