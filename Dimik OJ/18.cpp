#include <bits/stdc++.h>

using namespace std;

void solution()
{
    string str;
    getline(cin, str);
    string vowels, consonants;

    for (const auto i : str)
    {
        if (i >= 'a' && i <= 'z')
        {
            if ((i == 'a') || (i == 'e') || (i == 'i') || (i == 'o') || (i == 'u'))
                vowels += i;
            else
                consonants += i;
        }
    }

    cout << vowels << "\n"
         << consonants << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testCase;

    cin >> testCase;
    cin.ignore();

    while (testCase--)
        solution();

    return 0;
}