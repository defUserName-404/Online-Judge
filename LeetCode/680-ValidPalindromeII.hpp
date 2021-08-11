#include <iostream>
#include <map>

class Solution
{
  public:
    bool validPalindrome(std::string &s);
};

bool Solution::validPalindrome(std::string &s)
{
    int oddCharCount = 0;
    std::map<char, int> charCount;

    for(const char &ch : s)
        charCount[ch]++;

    for (auto it : charCount)
        if (it.second % 2)
            oddCharCount++;

    return (oddCharCount <= 2);
}