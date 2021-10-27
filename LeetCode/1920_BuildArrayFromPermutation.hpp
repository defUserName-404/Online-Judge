#include <vector>

class Solution
{
  public:
    std::vector<int> buildArray(std::vector<int> &nums);
};

//* O(n) extra space solution
// std::vector<int> Solution::buildArray(const std::vector<int> &nums)
// {
//     int len = nums.size();
//     std::vector<int> ans;

//     for (int i = 0; i < len; i++)
//         ans.push_back(nums[nums[i]]);

//     return ans;
// }

//* O(1) extra space solution
std::vector<int> Solution::buildArray(std::vector<int> &nums)
{
    int len = nums.size();

    for (int i = 0; i < len; i++)
        nums[i] = nums[i] + len * (nums[nums[i]] % len);

    for (int i = 0; i < len; i++)
        nums[i] = nums[i] / len;

    return nums;
}