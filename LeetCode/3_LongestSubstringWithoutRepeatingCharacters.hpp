#include <string>

class Solution
{
  public:
    int lengthOfLongestSubstring(std::string s);
};

int Solution::lengthOfLongestSubstring(std::string s)
{
    int n = s.size();
    int startingPointOfChars[256] = {[0 ... 255] = -1};
    int longest = 0, startingPosition = -1;
    for (int i = 0; i < n; i++)
    {
        startingPosition = std::max(startingPointOfChars[s[i]], startingPosition);
        startingPointOfChars[s[i]] = i;
        longest = std::max(longest, i - startingPosition);
    }
    return longest;
}
