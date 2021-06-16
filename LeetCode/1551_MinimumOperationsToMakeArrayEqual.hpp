class Solution
{
  public:
    int minOperations(int n);
};

int Solution::minOperations(int n)
{
    int operations = 0;

    for (int i = 0; i < (n / 2); i++)
        operations += (n - (i * 2 + 1));

    return operations;
}