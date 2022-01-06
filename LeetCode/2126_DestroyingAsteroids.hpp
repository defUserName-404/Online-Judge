#include <algorithm>
#include <vector>

class Solution
{
  public:
    bool asteroidsDestroyed(long mass, std::vector<int> &asteroids);
};

bool Solution::asteroidsDestroyed(long mass, std::vector<int> &asteroids)
{
    std::sort(asteroids.begin(), asteroids.end());

    for (int i = 0; i < asteroids.size(); i++)
    {
        if (asteroids[i] > mass)
            return false;

        mass += asteroids[i];
    }

    return true;
}