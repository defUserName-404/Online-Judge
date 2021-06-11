#include <iostream>

class Solution
{
  public:
    int maxPower(std::string &str);
};

int Solution::maxPower(std::string &str)
{
    int n = str.size();

    int current = 1, global = 1;

    for (int i = 1; i < n; i++)
	{
		if (str[i] == str[i - 1])
            current++;
		else
            current = 1;

        global = std::max(current, global);
    }

    return global;
}