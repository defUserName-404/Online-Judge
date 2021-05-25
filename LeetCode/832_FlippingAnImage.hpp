#include <vector>

class Solution
{
  public:
    std::vector<std::vector<int>> flipAndInvertImage(std::vector<std::vector<int>> &image);
};

std::vector<std::vector<int>> Solution::flipAndInvertImage(std::vector<std::vector<int>> &image)
{
    int n = image.size();
    
    std::vector<std::vector<int>> ans;

    for (int i = 0; i < n; i++)
    {
        std::vector<int> temp;

        for (int j = n - 1; j >= 0; j--)
            temp.push_back(image[i][j] ? 0 : 1);

        ans.push_back(temp);
    }

    return ans;
}