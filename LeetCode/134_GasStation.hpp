#include <vector>

class Solution
{
  public:
    int canCompleteCircuit(std::vector<int> &gas, std::vector<int> &cost);
};

int Solution::canCompleteCircuit(std::vector<int> &gas, std::vector<int> &cost)
{
    int n = gas.size();
    int startingPosition = 0, gasLeftOnTank = 0, minimumCost = 0;

    for (int i = 0; i < n; i++)
    {
        gasLeftOnTank += gas[i] - cost[i];

        if (gasLeftOnTank < minimumCost)
		{
            startingPosition = i + 1;
            minimumCost = gasLeftOnTank;
        }
    }

    if (gasLeftOnTank < 0)
        startingPosition = -1;

    return startingPosition;
}