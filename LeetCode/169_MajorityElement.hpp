#include <algorithm>
#include <unordered_map>
#include <vector>

// Solution 1: run - time(24 ms)
class Solution1
{
  public:
    int majorityElement(std::vector<int> &nums)
    {
        std::unordered_map<int, int> count;

        int n = nums.size();

        for (int it : nums)
            count[it]++;

        int element;

        for (auto it : count)
        {
            if (it.second >= (double)n / 2)
            {
                element = it.first;
                break;
            }
        }

        return element;
    }
};