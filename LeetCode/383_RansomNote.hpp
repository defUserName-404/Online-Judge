#include <cstring>
#include <iostream>

class Solution
{
  public:
    bool canConstruct(std::string ransomNote, std::string magazine)
    {
        int Count[26];

        memset(Count, 0, sizeof(Count));

        int r = ransomNote.size();
        int m = magazine.size();

        for (int i = 0; i < m; i++)
            Count[magazine[i] - 'a']++;

        for (int i = 0; i < r; i++)
        {
            Count[ransomNote[i] - 'a']--;

            if (Count[ransomNote[i] - 'a'] < 0)
                return false;
        }

        return true;
    }
};