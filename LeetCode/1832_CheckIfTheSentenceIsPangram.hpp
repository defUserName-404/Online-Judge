#include <string>

class Solution
{
  public:
    bool checkIfPangram(std::string sentence);
};

bool Solution::checkIfPangram(std::string sentence)
{
    int characterCount[26] = {0};

    for (const char &ch : sentence)
        characterCount[ch - 'a']++;

    for (int i = 0; i < 26; i++)
        if (characterCount[i] == 0)
            return false;

    return true;
}