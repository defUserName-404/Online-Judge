#include <iostream>

class Solution
{
  public:
    std::string reverseVowels(std::string s)
    {
        std::string vowels = "aeiouAEIOU";

        int left = s.find_first_of(vowels);
        int right = s.find_last_of(vowels);

        while (left < right)
        {
            std::swap(s[left], s[right]);

            left = s.find_first_of(vowels, left + 1);
            right = s.find_last_of(vowels, right - 1);
        }

        return s;
    }
};