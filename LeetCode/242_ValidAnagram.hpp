#include <algorithm>
#include <iostream>
#include <map>

class Solution
{
  public:
    bool isAnagram(std::string s, std::string t)
    {
        std::map<char, int> count_s, count_t;

        if (s.size() != t.size())
            return false;

        for (char ch : s)
            count_s[ch]++;

        for (char ch : t)
            count_t[ch]++;

        return (std::equal(count_s.begin(), count_s.end(), count_t.begin(), count_t.end()));
    }
};