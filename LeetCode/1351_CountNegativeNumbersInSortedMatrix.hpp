#include <vector>

class Solution
{
  public:
    int countNegatives(std::vector<std::vector<int>> &grid);
};

int Solution::countNegatives(std::vector<std::vector<int>> &grid)
{
    int count = 0;
    int m = grid.size();
    int n = grid[0].size();

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] < 0)
            {
                count += (n - j);
                break;
            }
        }
    }

    return count;
}