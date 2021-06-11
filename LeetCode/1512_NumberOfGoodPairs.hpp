#include <map>
#include <vector>

class Solution
{
  public:
    int numIdenticalPairs(std::vector<int> &nums);
};

int Solution::numIdenticalPairs(std::vector<int> &nums)
{
    int pairs = 0;

    std::map<int, int> count;

    for (const int &x : nums)
        count[x]++;
	
	for (const auto &it : count)
	{
        int n = it.second;

		if (n > 1)
            pairs += (n * (n - 1) / 2);
    }

    return pairs;
}