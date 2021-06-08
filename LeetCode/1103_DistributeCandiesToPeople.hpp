#include <vector>

class Solution
{
  public:
    std::vector<int> distributeCandies(int candies, int num_people);
};

std::vector<int> Solution::distributeCandies(int candies, int num_people)
{
    int n = 1, idx = 0;
    std::vector<int> ans(num_people, 0);

    while (candies - n > 0)
    {
        ans[idx] += n;
        candies -= n;
        idx++, n++;

        if (idx == num_people)
            idx = 0;
    }

    ans[idx] += candies;

    return ans;
}