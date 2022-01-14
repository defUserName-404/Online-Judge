#include <vector>

class Solution
{
  public:
    int search(std::vector<int> &nums, int target);
};

int Solution::search(std::vector<int> &nums, int target)
{
    int low = 0, high = nums.size() - 1;

    while (low <= high)
    {
        int mid = ((low + high) / 2);

        if (nums[mid] > target)
            high = mid - 1;
        else if (nums[mid] < target)
            low = mid + 1;
        else
            return mid;
    }
    // target not found
    return -1;
}