#include <algorithm>
#include <iostream>
#include <vector>

class Solution
{
  public:
    int countMatches(std::vector<std::vector<std::string>> &items, std::string ruleKey, std::string ruleValue);
};

int Solution::countMatches(std::vector<std::vector<std::string>> &items, std::string ruleKey, std::string ruleValue)
{
    int Count = 0;

    const std::vector<std::string> Keys = {"type", "color", "name"};
    auto it = std::find(Keys.begin(), Keys.end(), ruleKey);
    int idx = it - Keys.begin();

    for (auto &current : items)
        if (current.at(idx) == ruleValue)
            Count++;

    return Count;
}