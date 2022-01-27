#include <iostream>

class Solution
{
    bool isPalindrome(int left, int right, std::string _s, bool oddCharFound);

  public:
    bool validPalindrome(std::string &s);
};

bool Solution::isPalindrome(int left, int right, std::string _s, bool oddCharFound)
{
    while (left <= right)
    {
        if (_s[left] == _s[right])
        {
            left++;
            right--;
        }
        else
        {
            if (oddCharFound)
                return false;
            oddCharFound = true;

            return isPalindrome(left + 1, right, _s, oddCharFound) or
                   isPalindrome(left, right - 1, _s, oddCharFound);
        }
    }

    return true;
}

bool Solution::validPalindrome(std::string &s)
{
    bool oddCharFound = false;
    int left = 0, right = s.size() - 1;

    return isPalindrome(left, right, s, oddCharFound);
}