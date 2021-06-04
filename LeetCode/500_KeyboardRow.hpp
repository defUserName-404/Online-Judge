#include <iostream>
#include <unordered_map>
#include <vector>

class Solution
{
  public:
    std::vector<std::string> findWords(std::vector<std::string> &words);
};

std::vector<std::string> Solution::findWords(std::vector<std::string> &words)
{
    std::string row1 = "qwertyuiop",
                row2 = "asdfghjk",
                row3 = "zxcvbnm";

    std::vector<std::string> onSameRow;

    for (const std::string &s : words)
    {
        std::unordered_map<std::string, bool> rowCheck;

        for (int i = 0; i < s.size(); i++)
        {
            char ch = tolower(s[i]);

            if (row1.find(ch) != std::string::npos)
                rowCheck["row1"] = true;
            else if (row2.find(ch) != std::string::npos)
                rowCheck["row2"] = true;
            else if (row3.find(ch) != std::string::npos)
                rowCheck["row3"] = true;
        }

        int count = 0;

        for (auto r : rowCheck)
            if (r.second)
                count++;

        if (count == 1)
            onSameRow.push_back(s);
    }

    return onSameRow;
}