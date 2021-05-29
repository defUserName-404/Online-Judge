#include <vector>

class Solution
{
  public:
    std::vector<std::vector<int>> matrixReshape(std::vector<std::vector<int>> &mat, int r, int c);
};

std::vector<std::vector<int>> Solution::matrixReshape(std::vector<std::vector<int>> &mat, int r, int c)
{
    int m = mat.size();
    int n = mat[0].size();

    if ((m * n) != (r * c))
        return mat;

    std::vector<std::vector<int>> reshaped_matrix(r, std::vector<int>(c, 0));

    int k = 0, l = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            reshaped_matrix[k][l] = mat[i][j];

            if (++l ==c)
            {
                k++;
                l = 0;
            }
        }
    }

    return reshaped_matrix;
}
