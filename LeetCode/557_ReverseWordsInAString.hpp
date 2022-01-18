#include <iostream>

class Solution
{
    void reverseStringInPosition(int i, int &left, int &right, bool printSpace,
                                 std::string &reverse, const std::string &s);

  public:
    std::string reverseWords(std::string s);
};

void Solution::reverseStringInPosition(int i, int &left, int &right, bool printSpace,
                                       std::string &reverse, const std::string &s)
{
    for (int j = left + right; j >= left; j--)
        reverse += s[j];

    if (printSpace)
        reverse += ' ';

    left = i + 1;
    right = -1;
}

std::string Solution::reverseWords(std::string s)
{
    int len = s.size();
    int left = 0, right = -1;
    std::string reverse;

    for (int i = 0; i < len; i++)
    {
        if (s[i] != ' ')
            right++;

        else
            reverseStringInPosition(i, left, right, true, reverse, s);
    }

    reverseStringInPosition(left, left, right, false, reverse, s);

    return reverse;
}