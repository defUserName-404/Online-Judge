#include <iostream>
#include <unordered_map>

class Solution
{
  public:
    int maxNumberOfBalloons(std::string test);
};

int Solution::maxNumberOfBalloons(std::string test)
{
    std::unordered_map<char, int> BalloonCount;

    BalloonCount['a'] = BalloonCount['b'] = BalloonCount['l'] = BalloonCount['o'] = BalloonCount['n'] = 0;

    for (char ch : test)
        if (ch == 'b' or ch == 'a' or ch == 'l' or ch == 'o' or ch == 'n')
            BalloonCount[ch]++;

    BalloonCount['l'] /= 2;
    BalloonCount['o'] /= 2;

    int min = INT32_MAX;

    for (auto it : BalloonCount)
        if (it.second < min)
            min = it.second;

    return min;
}