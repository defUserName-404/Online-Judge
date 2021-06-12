#include <iostream>
#include <vector>

class Solution
{
  public:
    int countConsistentStrings(std::string allowed, std::vector<std::string> &words);
};

int Solution::countConsistentStrings(std::string allowed, std::vector<std::string> &words)
{
    int count = 0;
    bool flag = true;

    for (const std::string &s : words)
    {
        for (const char &ch : s)
        {
            if (allowed.find(ch) != std::string::npos)
            {
                flag = true;
                continue;
            }
            else
            {
                flag = false;
                break;
            }
        }
        if (flag)
            ++count;
    }

    return count;
}