#include <vector>

class Solution
{
  public:
    int singleNumber(std::vector<int> &nums)
    {
        int result = 0;

        for (auto it : nums)
            result ^= it;

        return result;
    }
};