#include <vector>

class Solution
{
  public:
    void duplicateZeros(std::vector<int> &arr);
};

void Solution::duplicateZeros(std::vector<int> &arr)
{
    int n = arr.size();
    int zeroCount = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (i == n)
            break;

        if (arr[i] == 0)
        {
            arr.insert(arr.begin() + i + 1, 0);
            i++;
            zeroCount++;
        }
    }

    while (zeroCount--)
        arr.pop_back();
}