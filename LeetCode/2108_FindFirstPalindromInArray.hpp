#include <string>
#include <vector>
#include <algorithm>

class Solution
{
	bool isPalindrome(std::string word)
	{
        std::string reversed = word;
        std::reverse(reversed.begin(), reversed.end());

        return word == reversed;
    }

  public:
    std::string firstPalindrome(std::vector<std::string> &words);
};

std::string Solution::firstPalindrome(std::vector<std::string> &words)
{
	for (const std::string &word : words)
		if (isPalindrome(word))
            return word;

    return "";
}