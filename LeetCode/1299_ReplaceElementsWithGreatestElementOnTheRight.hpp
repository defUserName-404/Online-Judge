#include <algorithm>
#include <vector>

class Solution
{
  public:
    std::vector<int> replaceElements(std::vector<int> &arr);
};

std::vector<int> Solution::replaceElements(std::vector<int> &arr)
{
    size_t n = arr.size();
    std::vector<int> ans;

    for (size_t i = 0; i < n - 1; i++)
    {
        int x = *(std::max_element(arr.begin() + i + 1, arr.end()));
        ans.push_back(x);
    }
    ans.push_back(-1);

    return ans;
}