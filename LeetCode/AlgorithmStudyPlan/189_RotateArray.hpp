#include <vector>

class Solution
{
  public:
    void rotate(std::vector<int> &nums, int k);
};

void Solution::rotate(std::vector<int> &nums, int k)
{
    int size = nums.size();
    k %= size;
    std::vector<int> numsAfterRotation(size);

    for (int i = 0; i < size - 1; i++)
    {
        int idx = (i + k) % size;
        numsAfterRotation[i] = nums[idx];
    }

    nums = numsAfterRotation;
}