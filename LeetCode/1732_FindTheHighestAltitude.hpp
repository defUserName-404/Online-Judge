#include <vector>

class Solution
{
  public:
    int largestAltitude(std::vector<int> &gain);
};

int Solution::largestAltitude(std::vector<int> &gain)
{
    int maxAltitude = 0, currentAltitude = 0;

    for (const int &x : gain)
    {
        currentAltitude += x;

        maxAltitude = std::max(currentAltitude, maxAltitude);
    }

    return maxAltitude;
}