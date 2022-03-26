#include <string>
#include <vector>

class Solution
{
  public:
    int prefixCount(std::vector<std::string> &words, std::string pref);
};

int Solution::prefixCount(std::vector<std::string> &words, std::string pref)
{
    int prefLen = pref.size();
    int count = 0;

    for (const auto word : words)
    {
        int wordLen = word.size();

        if (wordLen < prefLen)
            continue;

        for (int i = 0; i < prefLen; i++)
        {
            if (word[i] != pref[i])
                break;

            if (i == prefLen - 1)
                count++;
        }
    }

    return count;
}