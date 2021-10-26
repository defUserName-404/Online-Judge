#include <unordered_map>
#include <vector>

class Solution
{
  private:
    int findNextGreater(const int &x, const std::vector<int> &nums2);

  public:
    std::vector<int> nextGreaterElement(const std::vector<int> &nums1, const std::vector<int> &nums2);
};

int Solution::findNextGreater(const int &x, const std::vector<int> &nums2)
{
    int len2 = nums2.size();

    for (int i = 0; i < len2 - 1; i++)
        if (nums2[i] == x)
            for (int j = i + 1; j < len2; j++)
                if (nums2[i] > x)
                    return nums2[j];

    return -1;
}

std::vector<int> Solution::nextGreaterElement(const std::vector<int> &nums1, const std::vector<int> &nums2)
{
    int len1 = nums1.size();


    std::vector<int> ans;

    for (int i = 0; i < len1; i++)
    {
        int x = findNextGreater(nums1[i], nums2);

        ans.push_back(x);
    }

    return ans;
}