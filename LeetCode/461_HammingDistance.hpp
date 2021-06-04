#include <bitset>

class Solution
{
  public:
    int hammingDistance(int x, int y);
};

int Solution::hammingDistance(int x, int y)
{
    std::bitset<32> XOR;

    XOR = x ^ y;

    return XOR.count();
}