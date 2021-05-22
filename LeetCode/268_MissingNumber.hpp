#include <vector>

class Solution
{
  public:
    int missingNumber(std::vector<int> &nums);
};

int Solution::missingNumber(std::vector<int> &nums)
{
    int n = nums.size();
    int expected_sum = (n * (n + 1)) / 2;
    int real_sum = 0;

    for (int x : nums)
        real_sum += x;

    return expected_sum - real_sum;
}