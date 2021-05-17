#include <vector>

class Solution
{
  public:
    void reverseString(std::vector<char> &s)
    {
        int n = s.size();

        for (int i = 0, j = n - 1; i < n / 2; i++, j--)
            std::swap(s[i], s[j]);
    }
};