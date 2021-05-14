#include <iostream>
#include <stack>

class Solution
{
  public:
    bool isValid(std::string s)
    {
        std::stack<char> parentheses;

        parentheses.push(s[0]);

        int n = s.size();

        for (int i = 1; i < n; i++)
        {
            if (parentheses.empty())
            {
                parentheses.push(s[i]);
                continue;
            }

            int diff = s[i] - parentheses.top();

            if (diff == 1 || diff == 2)
                parentheses.pop();

            else
                parentheses.push(s[i]);
        }

        return parentheses.empty();
    }
};