#include <vector>
#include <iostream>

class Solution
{
  public:
    bool arrayStringsAreEqual(std::vector<std::string> &word1, std::vector<std::string> &word2);
};

bool Solution::arrayStringsAreEqual(std::vector<std::string> &word1, std::vector<std::string> &word2)
{
    std::string w1, w2;

    for (const std::string &s : word1)
        w1 += s;
    
    for (const std::string &s : word2)
        w2 += s;

    return (w1 == w2);
}