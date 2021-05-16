#include "189_RotateArray.hpp"

#include <iostream>

int main()
{
    std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    Solution s;

    s.rotate(nums, k);

    for (auto it : nums)
        std::cout << it << ' ';

    return 0;
}
