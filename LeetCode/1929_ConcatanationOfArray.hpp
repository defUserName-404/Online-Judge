#include <vector>

class Solution
{
  public:
    std::vector<int> getConcatenation(std::vector<int> &nums);
};

//* Solution 1
std::vector<int> Solution::getConcatenation(std::vector<int> &nums)
{
    int len = nums.size();

    nums.resize(2 * len);

    for (int i = len; i < 2 * len; i++)
        nums[i] = nums[i % len];

    return nums;
}

//* Solution 2
// std::vector<int> Solution::getConcatenation(std::vector<int> &nums)
// {
//     nums.insert(nums.end(), nums.begin(), nums.end());

//     return nums;
// }