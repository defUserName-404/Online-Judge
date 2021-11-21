#include <vector>
#include <algorithm>

class Solution
{
  public:
    std::vector<int> smallerNumbersThanCurrent(std::vector<int> &nums);
};

std::vector<int> Solution::smallerNumbersThanCurrent(std::vector<int> &nums)
{
    std::vector<int> position;

    for (int i = 0; i < nums.size(); i++)
    {
        int count = 0;

        for (int j = 0; j < nums.size(); j++)
		{
			if (i == j)
                continue;

			if (nums[i] < nums[j])
                count++;
        }

        position.push_back(count);
    }

    return position;
}