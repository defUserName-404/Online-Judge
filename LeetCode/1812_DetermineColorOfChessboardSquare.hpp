#include <string>

class Solution
{
  public:
    bool squareIsWhite(std::string coordinates);
};

bool Solution::squareIsWhite(std::string coordinates)
{
    int row = coordinates[1] - '0';
    int column = coordinates[0] - 'a' + 1;

    return (row % 2 == 0 xor column % 2 == 0);
}