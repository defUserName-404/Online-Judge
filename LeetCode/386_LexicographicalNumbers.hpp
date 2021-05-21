#include <algorithm>
#include <iostream>
#include <vector>

// 100ms run time(faster than 16%)
// need to optimize the solution

class Solution
{
  public:
    std::vector<int> lexicalOrder(int n)
    {
        std::vector<std::string> lexicalString;

        for (int i = 1; i <= n; i++)
            lexicalString.push_back(std::to_string(i));

        std::sort(lexicalString.begin(), lexicalString.end());

        std::vector<int> lexicalInt;

        for (auto it : lexicalString)
            lexicalInt.push_back(std::stoi(it));

        return lexicalInt;
    }
};