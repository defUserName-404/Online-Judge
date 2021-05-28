#include <vector>
#include <algorithm>

class Solution1
{
  public:
    bool isMonotonic(std::vector<int> &nums);
};

bool Solution1::isMonotonic(std::vector<int> &nums)
{
    bool is_increasing, is_decreasing;
    is_decreasing = is_increasing = false;

    int n = nums.size();

    for (int i = 1; i < n; i++)
    {
        if (nums[i] > nums[i - 1])
            is_increasing = true;
        else if (nums[i] < nums[i - 1])
            is_decreasing = true;
    }

    /*  
    return false if both of them are true and return true otherwise 
    truth table of possible outcomes:
    !(0 & 0) = 1, !(0 & 1) = 1, !(1 & 0) = 1, !(1 & 1) = 0
    */

    return !(is_increasing & is_decreasing);
}

class Solution2
{
  public:
    bool isMonotonic(std::vector<int> &nums);
};

bool Solution2::isMonotonic(std::vector<int> &nums)
{
    return (std::is_sorted(nums.begin(), nums.end()) || std::is_sorted(nums.rbegin(), nums.rend()));
}