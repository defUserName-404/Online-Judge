class Solution
{
  public:
    int hammingWeight(unsigned int n);
};

int Solution::hammingWeight(unsigned int n)
{
    int count = 0;

    while (n)
    {
        count += (n & 1);
        n >>= 1;
    }

    return count;
}