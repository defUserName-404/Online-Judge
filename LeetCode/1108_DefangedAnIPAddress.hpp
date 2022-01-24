#include <string>

class Solution
{
  public:
    std::string defangIPaddr(const std::string &address);
};

std::string Solution::defangIPaddr(const std::string &address)
{
    std::string defangedIP = "";

    for (const auto &ch : address)
    {
        if (ch == '.')
            defangedIP += "[.]";
        else
            defangedIP += ch;
    }

    return defangedIP;
}