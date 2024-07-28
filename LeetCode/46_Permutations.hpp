#include <vector>

class Solution
{
  private:
    std::vector<std::vector<int>> ans;
    void permuteHelper(std::vector<int> nums, int l, int r);

  public:
    std::vector<std::vector<int>> permute(std::vector<int> &nums);
};

void Solution::permuteHelper(std::vector<int> nums, int l, int r)
{
    if (l == r)
        ans.push_back(nums);
    for (int i = l; i <= r; i++)
    {
        std::swap(nums[l], nums[i]);
        permuteHelper(nums, l + 1, r);
        std::swap(nums[l], nums[i]);
    }
}

std::vector<std::vector<int>> Solution::permute(std::vector<int> &nums)
{
    permuteHelper(nums, 0, nums.size() - 1);
    return ans;
}
