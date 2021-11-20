#include <string>
#include <vector>

class Solution
{
  public:
    int finalValueAfterOperations(std::vector<std::string> &operations);
};

int Solution::finalValueAfterOperations(std::vector<std::string> &operations)
{
    int count = 0;

    for (const std::string &currentOperation : operations)
        count += (currentOperation == "++X" || currentOperation == "X++" ? +1 : -1);

    return count;
}