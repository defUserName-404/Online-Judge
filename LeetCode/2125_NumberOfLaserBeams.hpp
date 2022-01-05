#include <algorithm>
#include <string>
#include <vector>

class Solution
{
  public:
    int numberOfBeams(std::vector<std::string> &bank);
};

int Solution::numberOfBeams(std::vector<std::string> &bank)
{
    int devicesInPreviousCell = 0;
    long long totalLaserBeams = 0;

    for (const auto &s : bank)
    {
        int currentCount = std::count(s.begin(), s.end(), '1');

        totalLaserBeams += (currentCount * devicesInPreviousCell);

        if (currentCount)
            devicesInPreviousCell = currentCount;
    }

    return totalLaserBeams;
}