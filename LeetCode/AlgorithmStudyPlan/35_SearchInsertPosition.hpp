#include <vector>

class Solution
{
  public:
    int searchInsert(std::vector<int> &nums, int target);
};

//* We need to return the index of the target in the given array if it exists
//* return the position it needs to be inserted otherwise
int Solution::searchInsert(std::vector<int> &nums, int target)
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

    return low;
}