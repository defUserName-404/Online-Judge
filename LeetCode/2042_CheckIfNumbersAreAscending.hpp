#include <iostream>
#include <sstream>

class Solution
{
  public:
    bool areNumbersAscending(const std::string &s)
    {
        std::string str, tmp;
        std::stringstream ss(s);
        int num, prev = -1;

        while (!ss.eof())
        {
            ss >> tmp;

            if (std::stringstream(tmp) >> num)
            {
                if (num <= prev)
                    return false;

                prev = num;
            }
        }

        return true;
    }
};