#include <unordered_set>
#include <vector>

class Solution
{
  public:
    std::vector<int> intersection(std::vector<int> &nums1, std::vector<int> &nums2)
    {
        std::unordered_set<int> nums, ans;

        for (int x : nums1)
            nums.insert(x);

        for (int x : nums2)
        {
            if (nums.count(x))
                ans.insert(x);
        }

        std::vector<int> intersections(ans.begin(), ans.end());

        return intersections;
    }
};