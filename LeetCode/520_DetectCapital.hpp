#include <iostream>

class Solution
{
  public:
    bool detectCapitalUse(std::string word)
    {
        int n = word.size();

        int Count = 0;

        for (int i = 0; i < n; i++)
            if (isupper(word[i]))
                Count++;

        if (Count == 0 or Count == n)
            return true;

        if (Count == 1 and isupper(word[0]))
            return true;

        return false;
    }
};