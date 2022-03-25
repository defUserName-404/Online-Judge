#include <map>

class Solution
{
    int digitSum(int n);

  public:
    int countBalls(int lowLimit, int highLimit);
};

int Solution::digitSum(int n)
{
    int sum = 0;

    while (n)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int Solution::countBalls(int lowLimit, int highLimit)
{
    std::map<int, int> digitSumCount;

    for (int i = lowLimit; i <= highLimit; i++)
    {
        int current = digitSum(i);
        digitSumCount[current]++;
    }

    int max = 0;

	for (const auto it : digitSumCount)
		if (it.second > max)
            max = it.second;

    return max;
}