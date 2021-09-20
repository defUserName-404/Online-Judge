#include <iostream>

class Solution
{
  public:
    bool isPalindrome(std::string s);
};

bool Solution::isPalindrome(std::string s)
{
    int len = s.size();
    std::string reversed_s;

    for (int i = len - 1; i >= 0; i--)
    {
        if (isalpha(s[i]))
            s[i] = tolower(s[i]);
        if (isalnum(s[i]))
            reversed_s += s[i];
    }

    s = reversed_s;
    std::reverse(reversed_s.begin(), reversed_s.end());

    return (s == reversed_s);
}