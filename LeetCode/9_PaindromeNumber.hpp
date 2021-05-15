#include <algorithm>
#include <iostream>

class Solution
{
  public:
    bool isPalindrome(int x)
    {
        std::string str = std::to_string(x);
        std::string str_rev = str;
        std::reverse(str_rev.begin(), str_rev.end());

        return (str == str_rev);
    }
};