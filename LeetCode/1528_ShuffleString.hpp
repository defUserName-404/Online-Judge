#include <iostream>
#include <vector>

class Solution
{
  public:
    std::string restoreString(std::string s, std::vector<int> &indices);
};

std::string Solution::restoreString(std::string s, std::vector<int> &indices)
{
    std::string reshuffledString = s;

    int i = 0;

    for (const int &x : indices)
    {
        reshuffledString[x] = s[i];
        i++;
    }

    return reshuffledString;
}