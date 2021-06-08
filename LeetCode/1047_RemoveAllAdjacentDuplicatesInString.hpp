#include <iostream>
#include <stack>

class Solution
{
  public:
    std::string removeDuplicates(std::string &);
};

std::string Solution::removeDuplicates(std::string &str)
{
    int n = str.size();

    std::stack<char> stk;

    for (int i = 0; i < n; i++)
    {
        if (stk.empty() or str[i] != stk.top())
            stk.push(str[i]);
        else
            stk.pop();
    }

    std::string result = "";

    while (!stk.empty())
    {
        result += stk.top();
        stk.pop();
    }
    std::reverse(result.begin(), result.end());

    return result;
}