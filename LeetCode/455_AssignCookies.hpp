#include <algorithm>
#include <vector>

class Solution
{
  public:
    int findContentChildren(std::vector<int> &g, std::vector<int> &s)
    {
        int content = 0;

        std::sort(g.begin(), g.end());
        std::sort(s.begin(), s.end());

        int i = 0, j = 0;

        while (i < g.size() && j < s.size())
        {
            if (s[j] >= g[i])
                i++, j++, content++;
            else
                j++;
        }

        return content;
    }
};