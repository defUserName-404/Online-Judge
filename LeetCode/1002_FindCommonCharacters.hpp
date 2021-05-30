#include <iostream>
#include <vector>
#include <cstring>

class Solution
{
	public:
		std::vector<std::string> commonChars(std::vector<std::string> &words);
};

std::vector<std::string> Solution::commonChars(std::vector<std::string> &words)
{
    int n = words.size();

    std::vector<std::string> ans;

    int Count[n][26];
    memset(Count, 0, sizeof(Count));

    int i = 0;

    for (std::string s : words)
    {
		for (char c : s)
            Count[i][c - 'a']++;

        i++;
    }

    i = 0;

    for (int j = 0; j < 26; j++)
	{
        for (i = 0; i < n; i++)
		{
			
		}
    }
}