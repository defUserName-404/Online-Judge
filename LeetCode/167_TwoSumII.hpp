#include <vector>
#include <unordered_map>

class Solution
{
  public:
    std::vector<int> twoSum(std::vector<int> &numbers, int target)
    {
        std::unordered_map<int, int> indices;
        std::vector<int> ans;

        int n = numbers.size();

        for (int i = 0; i < n; i++)
        {
            if (indices.find(target - numbers[i]) != indices.end())
            {
                ans.push_back(indices[target - numbers[i]] + 1);
                ans.push_back(i + 1);
            }
            indices[numbers[i]] = i;
        }

        return ans;
    }
};