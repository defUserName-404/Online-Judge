#include <unordered_set>
#include <vector>
#include <iostream>

class Solution
{
  public:
    std::string destCity(std::vector<std::vector<std::string>> &paths);
};

std::string Solution::destCity(std::vector<std::vector<std::string>> &paths)
{
    std::unordered_set<std::string> startingPoints, endPoints;

    for (const auto &vec : paths)
    {
        startingPoints.insert(vec.at(0));
        endPoints.insert(vec.at(1));
    }

    for (const std::string &s : endPoints)
        if (!startingPoints.count(s))
            return s;

    return "";
}