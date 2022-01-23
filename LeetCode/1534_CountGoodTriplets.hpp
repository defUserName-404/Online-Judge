#include <vector>
#include <cmath>

class Solution
{
  public:
    int countGoodTriplets(std::vector<int> &arr, int a, int b, int c);
};

int Solution::countGoodTriplets(std::vector<int> &arr, int a, int b, int c)
{
    int len = arr.size();
    int count = 0;

    for (int i = 0; i < len - 2; i++)
    {
        for (int j = i + 1; j < len - 1; j++)
		{
            for (int k = j + 1; k < len; k++)
			{
                int x = abs(arr[i] - arr[j]);
                int y = abs(arr[j] - arr[k]);
                int z = abs(arr[i] - arr[k]);

				if (x <= a and y <= b and z <= c)
                    count++;
            }
        }
    }

    return count;
}