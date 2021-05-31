#include <iostream>

class Solution
{
  public:
    int maximum69Number(int num);
};

int Solution::maximum69Number(int num)
{
    std::string number = std::to_string(num);

    for (int i = 0; i < number.size(); i++)
    {
        if (number[i] == '6')
        {
            number[i] = '9';
            break;
        }
    }

    return (std::stoi(number));
}