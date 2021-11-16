#include <iostream>
#include <vector>

class Solution
{
  public:
    std::string longestCommonPrefix(std::vector<std::string> &strs);
};

std::string Solution::longestCommonPrefix(std::vector<std::string> &strs)
{
    std::string longest;
    bool isSame = true;
    int totalStrings = strs.size();

    for (int j = 0;; j++)
    {
        for (int i = 0; i < totalStrings - 1; i++)
        {
            if (j == strs[i].size() || !isSame)
                return longest;

            isSame = (strs[i][j] == strs[i + 1][j]);
        }

        if (isSame)
            longest += strs[0][j];
    }

    return longest;
}