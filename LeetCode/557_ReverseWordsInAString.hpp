#include <iostream>

class Solution
{
  public:
    std::string reverseWords(std::string s);
};

std::string Solution::reverseWords(std::string s)
{
    int len = s.size();
    int l = 0, r = 0;
    std::string reverse;

    for (int i = 0; i < len; i++)
    {
        if (s[i] != ' ')
            r++;

        else
        {
            for (int j = r - 1; j >= l; j--)
            {
                reverse += s[j];
            }

            l = i;
            reverse += ' ';
        }
    }

    return reverse;
}