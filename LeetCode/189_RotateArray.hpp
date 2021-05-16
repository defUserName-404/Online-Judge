#include <vector>

class Solution
{
  public:
    void rotate(std::vector<int> &nums, int k)
    {
        int n = nums.size();
        
        std::vector<int> finalPosition(n);

        k %= n;

        for (int i = 0; i < n; i++)
        {
            int position = (i + k);
            position %= n;

            finalPosition[position] = nums[i];
        }

        for (int i = 0; i < n; i++)
            nums[i] = finalPosition[i];
    }
};