#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string str;
    cin >> str;

    int n = str.length();

    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'H' || str[i] == 'Q' || str[i] == '9')
        {
            cout << "YES\n";

            return 0;
        }
    }

    cout << "NO\n";

    return 0;
}