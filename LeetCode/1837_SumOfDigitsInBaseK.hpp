class Solution
{
  public:
    int sumBase(int n, int k);
};

int Solution::sumBase(int n, int k)
{
    int to_base = 0;

    while (n > 0)
    {
        to_base += (n % k);
        n /= k;
    }

    return to_base;
}