#include <algorithm>
#include <string>

class Solution
{
  public:
    bool checkString(std::string &s);
};

/*
?   Solution 1: Accepted
?   8ms(23.53% faster)    
*/
// bool Solution::checkString(std::string s)
// {
//     std::string sSorted = s;
//     std::sort(sSorted.begin(), sSorted.end());

//     return s == sSorted;
// }

/*
?   Solution 1: Accepted
?   5ms(70% faster)    
*/
bool Solution::checkString(std::string &s)
{
    bool bSeen = false;

    for (const auto &ch : s)
    {
        if (!bSeen && ch == 'b')
            bSeen = true;
        if (bSeen && ch == 'a')
            return false;
    }

    return true;
}