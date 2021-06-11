class Solution
{
  public:
    int xorOperation(int n, int start);
};

int Solution::xorOperation(int n, int start)
{
    int XOR = start;

    for (int i = 1; i < n; i++)
    {
        int value = start + 2 * i;
        XOR ^= value;
    }

    return XOR;
}