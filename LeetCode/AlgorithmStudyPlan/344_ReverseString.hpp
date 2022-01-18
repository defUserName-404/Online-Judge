#include <vector>

class Solution
{
  public:
    void reverseString(std::vector<char> &s);
};

void Solution::reverseString(std::vector<char> &s)
{
    int n = s.size();

    for (int i = 0; i < n / 2; i++)
        std::swap(s[i], s[n - 1 - i]);
}