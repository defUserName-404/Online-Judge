#include <unordered_map>
#include <vector>

class Solution
{
  public:
    std::vector<int> twoSum(std::vector<int> &num, int target)
    {
        std::unordered_map<int, int> indices;
        std::vector<int> ans;

        int n = num.size();

        for (int i = 0; i < n; i++)
        {
            if (indices.find(target - num[i]) != indices.end())
            {
                ans.push_back(indices[target - num[i]]);
                ans.push_back(i);
            }
            indices[num[i]] = i;
        }

        return ans;
    }
};