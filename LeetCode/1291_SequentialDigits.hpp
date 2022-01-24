#include <string>
#include <vector>

class Solution
{
    int totalDigits(int x);
    int generateFirst(int n);
    int toAdd(int n);

  public:
    std::vector<int> sequentialDigits(int low, int high);
};

int Solution::totalDigits(int x)
{
    int _count = 0;

    while (x > 0)
    {
        _count++;
        x /= 10;
    }

    return _count;
}

int Solution::generateFirst(int n)
{
    std::string _str;

    for (int i = 1; i <= n; i++)
        _str += (i + '0');

    return stoi(_str);
}

int Solution::toAdd(int n)
{
    std::string _str;

    for (int i = 0; i < n; i++)
        _str += '1';

    return stoi(_str);
}

std::vector<int> Solution::sequentialDigits(int low, int high)
{
    std::vector<int> sequence;
    int noOfDigits = totalDigits(low);
    int x = generateFirst(noOfDigits);

    while (x <= high and x <= 123456789)
    {
        if (x >= low)
            sequence.push_back(x);

        x += toAdd(noOfDigits);

        if (x % 10 == 9)
        {
            noOfDigits++;

            if (x >= low && x <= high)
                sequence.push_back(x);

            x = generateFirst(noOfDigits);
        }
    }

    return sequence;
}