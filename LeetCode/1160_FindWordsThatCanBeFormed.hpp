#include <iostream>
#include <vector>

class Solution
{
  public:
    int countCharacters(std::vector<std::string> &words, std::string chars);
};

int Solution::countCharacters(std::vector<std::string> &words, std::string chars)
{
    int Count[26] = {0};
    int resultLength = 0;

    for (char ch : chars)
        Count[ch - 'a']++;

    for (std::string s : words)
    {
        bool flag = true;

        int temp[26];

        for (int i = 0; i < 26; i++)
            temp[i] = Count[i];

        for (char ch : s)
        {
            temp[ch - 'a']--;

            if (temp[ch - 'a'] < 0)
            {
                flag = false;
                break;
            }
        }

        if (flag)
            resultLength += s.size();
    }

    return resultLength;
}