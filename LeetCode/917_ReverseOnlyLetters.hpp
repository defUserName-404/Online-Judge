#include <iostream>

class Solution
{
  public:
    std::string reverseOnlyLetters(std::string s)
    {
        int l = 0, r = s.size() - 1;

        while (l < r)
        {
            if (!isalpha(s[l]))
                l++;
            else if (!isalpha(s[r]))
                r--;
            else
            {
                std::swap(s[l], s[r]);
                l++;
                r--;
            }
        }

        return s;
    }
};