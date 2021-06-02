#include <iostream>
#include <vector>

class Solution
{
  public:
    std::vector<std::string> fizzBuzz(int n);
};

std::vector<std::string> Solution::fizzBuzz(int n)
{
    std::vector<std::string> array(n);

    for (int i = 1; i <= n; i++)
    {
        bool flag1 = (i % 3 == 0), flag2 = (i % 5 == 0);

        if (flag1)
            array[i - 1] = (flag2 ? "FizzBuzz" : "Fizz");
        else if (flag2)
            array[i - 1] = "Buzz";
        else
            array[i - 1] = std::to_string(i);
    }

    return array;
}