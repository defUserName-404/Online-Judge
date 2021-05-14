#include "20_ValidParentheses.hpp"

#include <iostream>

int main()
{
    std::string s1, s2, s3;

    s1 = "()[]{}";
    s2 = "([)]";
    s3 = "{[]}";

    Solution s;

    // std::cout << s.isValid(s1) << std::endl;
    std::cout << s.isValid(s2) << std::endl;
    std::cout << s.isValid(s3) << std::endl;

    return 0;
}
