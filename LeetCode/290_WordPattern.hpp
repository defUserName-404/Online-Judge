#include <iostream>
#include <map>
#include <sstream>

// ! Unsolved
class Solution
{
  public:
    bool wordPattern(const std::string &pattern, const std::string &s);
};

bool Solution::wordPattern(const std::string &pattern, const std::string &s)
{
    std::map<std::string, char> patternMatch;
    int i = 0;
    std::istringstream stream(s);
    std::string word;

    while (stream >> word)
    {
        patternMatch[word] = pattern[i];
    }
}