#include <string>
#include <vector>

class Solution
{
    void afterCurrentInstructionExecution(int &, int &, char);

  public:
    std::vector<int> executeInstructions(int n, std::vector<int> &startPos, std::string s);
};

void Solution::afterCurrentInstructionExecution(int &x, int &y, char currentInstruction)
{
    switch (currentInstruction)
    {
    case 'R':
        x++;
        break;
    case 'L':
        x--;
        break;
    case 'U':
        y--;
        break;
    case 'D':
        y++;
        break;
    }
}

std::vector<int> Solution::executeInstructions(int n, std::vector<int> &startPos, std::string s)
{
    std::vector<int> executableExecutionCount;

    for (int i = 0; i < s.size(); i++)
    {
        int executableExecutionCountFromThisPosition = 0;
        int x = startPos[1], y = startPos[0];

        for (int j = i; j < s.size(); j++)
        {
            afterCurrentInstructionExecution(x, y, s[j]);

            if (x >= 0 && x < n && y >= 0 && y < n)
                executableExecutionCountFromThisPosition++;

            else
                break;
        }

        executableExecutionCount.push_back(executableExecutionCountFromThisPosition);
    }

    return executableExecutionCount;
}