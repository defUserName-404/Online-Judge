#include <bits/stdc++.h>

using namespace std;

typedef unsigned int ui;

int solve(bool p[], int n)
{
    for (ui i = 0; i < n; i++)
    {
        if (p[i])
        {
            cout << "HARD\n";

            return 0;
        }
    }

    cout << "EASY\n";

    return 0;
}

int main()
{
    int n;
    cin >> n;

    bool p[101];
    for (ui i = 0; i < n; i++)
        cin >> p[i];

    solve(p, n);

    return 0;
}