class Solution
{
  public:
    int tribonacci(int n);
};

int Solution::tribonacci(int n)
{
    int result[38];

    result[0] = 0;
    result[1] = result[2] = 1;

    for (int i = 3; i <= n; i++)
        result[i] = result[i - 1] + result[i - 2] + result[i - 3];

    return result[n];
}