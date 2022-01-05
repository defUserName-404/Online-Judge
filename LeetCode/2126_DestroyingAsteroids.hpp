#include <algorithm>
#include <vector>

class Solution
{
  public:
    bool asteroidsDestroyed(int mass, std::vector<int> &asteroids);
};

bool Solution::asteroidsDestroyed(int mass, std::vector<int> &asteroids)
{
    std::sort(asteroids.begin(), asteroids.end());

    long long total = mass;

    for (int i = 0; i < asteroids.size(); i++)
    {
        if (asteroids[i] > total)
            return false;

        total += asteroids[i];
    }

    return true;
}