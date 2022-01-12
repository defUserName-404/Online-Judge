#include <string>
#include <vector>

class Solution
{
    std::string current(int n);

  public:
    std::vector<std::string> generateParenthesis(int n);
};

std::string Solution::current(int n)
{
    std::string str;

    for (int i = 1; i <= n; i++)
        str += '(';
    for (int i = 1; i <= n; i++)
        str += ')';

    int remaining = n--;

    if (remaining)
        str += current(remaining);

    return str;
}

std::vector<std::string> Solution::generateParenthesis(int n)
{
    std::vector<std::string> ans;

    for (int start = n; start >= 1; start--)
    {
        ans.push_back(current(start));
    }

    return ans;
}