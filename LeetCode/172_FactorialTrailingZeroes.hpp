class Solution
{
  public:
    int trailingZeroes(int n);
};

int Solution::trailingZeroes(int n)
{
    int CountOfFive = 0;

    for (int i = 5; i <= n; i += 5)
    {
        int temp = i;

        while (temp % 5 == 0)
        {
            ++CountOfFive;
            temp /= 5;
        }
    }

    return CountOfFive;
}