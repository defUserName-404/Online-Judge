#include <iostream>

class Solution
{
  public:
    std::string reverseWords(std::string s);
};

std::string Solution::reverseWords(std::string s)
{
    int len = s.size();
    int left = 0, right = 0;
    std::string reverse;

    for (int i = 0; i < len; i++)
    {
        if (s[i] != ' ')
            right++;

        else
        {
            for (int j = right - 1; j >= left; j--)
                reverse += s[j];

            left = i;
            reverse += ' ';
        }
    }

    return reverse;
}