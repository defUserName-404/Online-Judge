#include <iostream>
#include <map>

class Solution
{
  public:
    int longestPalindrome(std::string &s);
};

int Solution::longestPalindrome(std::string &s)
{
    std::map<char, size_t> charCount;

    for (const char &ch : s)
        charCount[ch]++;

    size_t count = 0;
    bool oddChar = false;

    for (auto it : charCount)
    {
        const size_t value = it.second;

        if (value >= 2)
        {
            if (value % 2)
                oddChar |= true;

            count += (value / 2);
        }
        else
            oddChar |= true;
    }

    if (oddChar)
        ++count;

    return count;
}