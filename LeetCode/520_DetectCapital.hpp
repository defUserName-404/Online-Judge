#include <iostream>

class Solution
{
  public:
    bool detectCapitalUse(std::string word);
};

bool Solution::detectCapitalUse(std::string word)
{
    int n = word.size();
    int count = 0;

    for (int i = 0; i < n; i++)
        if (isupper(word[i]))
            count++;

    if (count == 0 or count == n)
        return true;

    if (count == 1 and isupper(word[0]))
        return true;

    return false;
}