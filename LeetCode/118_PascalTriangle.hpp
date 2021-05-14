#include <vector>

class Solution
{
  public:
    std::vector<std::vector<int>> generate(int numRows)
    {
        std::vector<std::vector<int>> pascal_triangle;

        for (int i = 0; i < numRows; i++)
        {
            std::vector<int> current;

            for (int j = 0; j <= i; j++)
            {
                if ((j == 0) || (i == j))
                    current.push_back(1);
                else
                    current.push_back(pascal_triangle[i - 1][j - 1] + pascal_triangle[i - 1][j]);
            }

            pascal_triangle.push_back(current);
        }

        return pascal_triangle;
    }
};