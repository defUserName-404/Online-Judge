#include <unordered_map>
#include <vector>

class Solution
{
  public:
    int sumOfUnique(std::vector<int> &nums);
};

int Solution::sumOfUnique(std::vector<int> &nums)
{
    std::unordered_map<int, int> Count;

    for (const int &x : nums)
        Count[x]++;

    unsigned int uniqueSum = 0;

    for (const auto &it : Count)
        if (it.second == 1)
            uniqueSum += it.first;

    return uniqueSum;
}