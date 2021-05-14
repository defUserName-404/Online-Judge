#include "118_PascalTriangle.hpp"

#include <iostream>

int main()
{
    std::vector<std::vector<int>> ans;

    Solution s;

    int n = 5;

    ans = s.generate(n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            std::cout << ans[i][j] << ' ';

        std::cout << '\n';
    }
}
