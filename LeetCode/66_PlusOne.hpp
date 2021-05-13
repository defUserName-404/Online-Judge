#include <vector>

class Solution
{
  public:
    std::vector<int> plusOne(std::vector<int> &digits)
    {
        int n = digits.size();
        int carry = 1;
        int current;

        for (int i = n - 1; i >= 0; i--)
        {
            current = digits[i] + carry;
            digits[i] = current % 10;
            carry = current / 10;
        }

        if (carry)
            digits.insert(digits.begin(), 1);

        return digits;
    }
};