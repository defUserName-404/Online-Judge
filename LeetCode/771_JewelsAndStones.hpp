#include <iostream>

class Solution
{
  public:
    int numJewelsInStones(std::string jewels, std::string stones);
};

int Solution::numJewelsInStones(std::string jewels, std::string stones)
{
    int count = 0;

    for (const char &ch : stones)
        if (jewels.find(ch) != std::string::npos)
            ++count;

    return count;
}