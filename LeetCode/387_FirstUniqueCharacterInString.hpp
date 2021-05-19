#include <iostream>

class Solution
{
  public:
    int firstUniqChar(std::string s)
    {
        int Count[26] = {0};

        for (char ch : s)
            Count[ch - 'a']++;

        int index = 0;

        for (char ch : s)
        {
            if (Count[ch - 'a'] == 1)
                return index;

            index++;
        }

        return -1;
    }
};