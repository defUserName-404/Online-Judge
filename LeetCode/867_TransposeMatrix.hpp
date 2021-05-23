#include <vector>

class Solution
{
  public:
    std::vector<std::vector<int>> transpose(std::vector<std::vector<int>> &matrix);
};

std::vector<std::vector<int>> Solution::transpose(std::vector<std::vector<int>> &matrix)
{
    std::vector<std::vector<int>> TransposedMatrix;

    int m = matrix.size();
    int n = matrix[0].size();

    for (int j = 0; j < n; j++)
    {
        std::vector<int> temp;

        for (int i = 0; i < m; i++)
            temp.push_back(matrix[i][j]);

        TransposedMatrix.push_back(temp);
    }

    return TransposedMatrix;
}