#include <vector>

class Solution
{
  public:
    bool validMountainArray(std::vector<int> &arr);
};

bool Solution::validMountainArray(std::vector<int> &arr)
{
    int len = arr.size();
    bool midpointFound = false, isIncreasing = false;
    if (len < 3)
        return false;

    for (int i = 0; i < len - 1; i++)
    {
		if (arr[i + 1] > arr[i])
            isIncreasing = true;

        if (arr[i] > arr[i + 1] & isIncreasing)
            midpointFound = true;

        if ((arr[i + 1] >= arr[i] and midpointFound) or (arr[i + 1] <= arr[i] and !midpointFound))
            return false;
    }

    return midpointFound;
}