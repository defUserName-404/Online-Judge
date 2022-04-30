#include <algorithm>
#include <vector>

class Solution
{
  public:
    void rotate(std::vector<std::vector<int>> &matrix);
};

/*
1 2 3
4 5 6
7 8 9
->
1 4 7
2 5 8
3 6 9
*/

void Solution::rotate(std::vector<std::vector<int>> &matrix)
{
    int n = matrix.size();

    for (int i = 0; i < n; i++)
        for (int j = 0; j < i; j++)
            std::swap(matrix[i][j], matrix[j][i]);

    for (int i = 0; i < n; i++)
        std::reverse(matrix[i].begin(), matrix[i].end());
}