#include <vector>

class Solution
{
    bool isSelfDividing(int n);

  public:
    std::vector<int> selfDividingNumbers(int left, int right);
};

bool Solution::isSelfDividing(int n)
{
    int temp = n;

	while (temp > 0)
	{
        int currentDigit = temp % 10;
        temp /= 10;

		if (currentDigit == 0 || n % currentDigit)
            return false;
    }

    return true;
}

std::vector<int> Solution::selfDividingNumbers(int left, int right)
{
    std::vector<int> nums;

    for (int i = left; i <= right; i++)
		if (isSelfDividing(i))
            nums.push_back(i);

    return nums;
}