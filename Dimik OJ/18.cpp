#include <bits/stdc++.h>

using namespace std;

void solution()
{
    string str;
    getline(cin, str);
    vector<char> v, c;

    for (auto i : str)
    {
        if (i >= 'a' && i <= 'z')
        {
            if ((i == 'a') || (i == 'e') || (i == 'i') || (i == 'o') || (i = 'u'))
                v.push_back(i);
            else
                c.push_back(i);
        }
        else if (i >= 'A' && i <= 'Z')
        {
            if ((i == 'A') || (i == 'E') || (i == 'I') || (i == 'O') || (i == 'U'))
                v.push_back(i);
            else
                c.push_back(i);
        }
    }

    for (auto i : v)
        cout << i;
    cout << "\n";

    for (auto i : c)
        cout << i;
    cout << "\n";
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