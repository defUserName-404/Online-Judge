#include <string>
#include <vector>

class Solution
{
  public:
    std::vector<int> minOperations(std::string boxes);
};

//* O(n^2) Trivial Solution
std::vector<int> Solution::minOperations(std::string boxes)
{
    int n = boxes.size();
    std::vector<int> moves;

    for (int i = 0; i < n; i++)
    {
        int currentMove = 0;

        for (int j = 0; j < n; j++)
        {
            if (boxes[j] == '1')
                currentMove += abs(i - j);
        }

        moves.push_back(currentMove);
    }

    return moves;
}