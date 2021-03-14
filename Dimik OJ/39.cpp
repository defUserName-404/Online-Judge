#include <bits/stdc++.h>

using namespace std;

int isPalindrome(string in_string)
{
    string in_string_reversed;
    int i, j;
    int len = in_string.length();

    for (i = 0, j = len - 1; j >= 0; i++, j--)
        in_string_reversed[i] = in_string[j];

    for (i = 0; i < len; i++)
    {
        if (in_string[i] == in_string_reversed[i])
            continue;
        else
        {
            printf("Sorry! It is not Palindrome!\n");
            return 0;
        }
    }
    printf("Yes! It is Palindrome!\n");

    return 0;
}

int main()
{
    int testCase;
    cin >> testCase;
    string word;

    for (int i = 1; i <= testCase; i++)
    {
        getchar();
        cin >> word;

        isPalindrome(word);
    }

    return 0;
}