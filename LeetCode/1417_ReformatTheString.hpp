#include <iostream>
#include <vector>

class Solution
{
  public:
    std::string reformat(std::string);
};

std::string Solution::reformat(std::string s)
{
    std::vector<char> letters, digits;

    for (char ch : s)
    {
        if (isdigit(ch))
            digits.push_back(ch);
        else
            letters.push_back(ch);
    }

    int diff = letters.size() - digits.size();

    std::string ans = "";

    if (diff == 0 or diff == 1 or diff == -1)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (((diff == 0 or diff == 1) and i % 2) or (diff == -1 and i % 2 == 0))
            {
                ans.push_back(digits.back());
                digits.pop_back();
            }
            else
            {
                ans.push_back(letters.back());
                letters.pop_back();
            }
        }
    }

    return ans;
}