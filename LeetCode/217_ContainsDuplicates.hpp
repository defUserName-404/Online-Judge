#include <unordered_map>
#include <unordered_set>
#include <vector>

class Solution
{
  public:
    bool containsDuplicate_using_set(std::vector<int> &nums)
    {
        std::unordered_set<int> numCount;

        for (auto it : nums)
        {
            if (numCount.count(it))
                return true;

            numCount.insert(it);
        }

        return false;
    }

    bool containsDuplicate_using_map(std::vector<int> &nums)
    {
        int n = nums.size();

        std::unordered_map<int, int> Count;

        for (int i = 0; i < n; i++)
            Count[nums[i]]++;

        for (auto it : Count)
            if (it.second > 1)
                return true;

        return false;
    }
};