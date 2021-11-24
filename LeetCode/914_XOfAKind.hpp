#include <map>
#include <numeric>
#include <vector>

class Solution
{
  public:
    bool hasGroupsSizeX(std::vector<int> &deck);
};

bool Solution::hasGroupsSizeX(std::vector<int> &deck)
{
    std::map<int, int> occurance;

    for (const int &x : deck)
        occurance[x]++;

    int count = occurance.begin()->second;

    for (const auto &it : occurance)
    {
        if (std::gcd(count, it.second) < 2)
            return false;

        count = it.second;
    }

    return true;
}