#include <cmath>
#include <vector>

class Solution
{
  public:
    int minTimeToVisitAllPoints(std::vector<std::vector<int>> &points);
};

int Solution::minTimeToVisitAllPoints(std::vector<std::vector<int>> &points)
{
    int count = 0;

    for (int i = 1; i < points.size(); i++)
    {
        std::vector<int> current = points[i], previous = points[i - 1];

        int x = abs(current[0] - previous[0]);
        int y = abs(current[1] - previous[1]);
        int min = std::min(x, y);

        count += (x + y - min);
    }

    return count;
}