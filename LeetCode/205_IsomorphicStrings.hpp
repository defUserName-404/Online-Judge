#include <iostream>

class Solution
{
  public:
    bool isIsomorphic(std::string s, std::string t)
    {
        int visited1[256] = {0};
        int visited2[256] = {0};

        int n = s.size();

        for (int i = 0; i < n; i++)
        {
            char c1 = s[i];
            char c2 = t[i];

            if (visited1[c1] != visited2[c2])
                return false;

            visited1[c1] = i + 1;
            visited2[c2] = i + 1;
        }

        return true;
    }
};