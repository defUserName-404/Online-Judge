#include <algorithm>
#include <iostream>
#include <vector>

class Solution
{
  public:
    void merge(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n)
    {
        // removing 0's
        nums1.erase(nums1.end() - n, nums1.end());

        for (int x : nums2)
            nums1.push_back(x);

        std::sort(nums1.begin(), nums1.end());
    }
};