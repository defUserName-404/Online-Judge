#include <iostream>

class Solution
{
  public:
    char findTheDifference(std::string s, std::string t)
    {
        int Count[26] = {0};

        for (char ch : s)
            Count[ch - 'a']++;

        char diff;

        for (char ch : t)
        {
            Count[ch - 'a']--;

            if (Count[ch - 'a'] < 0)
            {
                diff = ch;
                break;
            }
        }

        return diff;
    }
};