#include <string>
#include <vector>

class Solution
{
  public:
    bool checkInclusion(std::string s1, std::string s2);
};

bool Solution::checkInclusion(std::string s1, std::string s2)
{
    if (s1.size() > s2.size())
        return false;

    std::vector<int> s1map(26, 0);
    std::vector<int> s2map(26, 0);

    for (char ch : s1)
        s1map[ch - 'a']++;

    for (int i = 0; i < s1.size(); ++i)
        s2map[s2[i] - 'a']++;

    for (int i = 0; i < s2.size() - s1.size() + 1; ++i)
    {
        if (i != 0)
        {
            s2map[s2[i - 1] - 'a']--;
            s2map[s2[i + s1.size() - 1] - 'a']++;
        }
        if (s1map == s2map)
            return true;
    }

    return false;
}