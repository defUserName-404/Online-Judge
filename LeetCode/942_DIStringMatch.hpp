#include <iostream>
#include <vector>

class Solution
{
  public:
    std::vector<int> diStringMatch(std::string s);
};

std::vector<int> Solution::diStringMatch(std::string s)
{
    int x = 0, y = s.size();
    int sum = 0;

    std::vector<int> result;

    for (const char &ch : s)
    {
        if (ch == 'I')
        {
            result.push_back(x);
            sum += x;
            x++;
        }
        else
        {
            result.push_back(y);
            sum += y;
            y--;
        }
    }

    int n = s.size();

    result.push_back((n * (n + 1) / 2) - sum);

    return result;
}