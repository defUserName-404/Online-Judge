#include <map>
#include <vector>


// Wrong solution, got the question completely wrong
class Solution
{
  public:
    std::vector<int> topKFrequent(std::vector<int> &nums, int k)
    {
        std::map<int, int> countElement;

        for (auto it : nums)
            countElement[it]++;

        std::vector<int> ans;

        for (auto it : countElement)
        {
            if (it.second >= k)
                ans.push_back(it.first);
        }

        return ans;
    }
};