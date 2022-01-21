#include <vector>

class Solution
{
  public:
    int canCompleteCircuit(std::vector<int> &gas, std::vector<int> &cost);
};

int Solution::canCompleteCircuit(std::vector<int> &gas, std::vector<int> &cost)
{
    int n = gas.size();
    int starting = -1;
    int current = 0;

    for (int i = 0; i < n; i++)
    {
        int j = i;
        current = 0;

        do
        {
            if (current + gas[j] < cost[j])
            {
                starting = -1;
                break;
            }

            current += gas[j] - cost[j];
            starting = i;

            j++;
            if (j == n)
                j = 0;
        } while (j != i);

        if (starting != -1)
            break;
    }

    return starting;
}