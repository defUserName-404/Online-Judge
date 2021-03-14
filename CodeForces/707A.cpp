#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, i, j;
    cin >> n >> m;
    char s[n][m];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            cin >> s[i][j];
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (s[i][j] == 'M' || s[i][j] == 'Y' || s[i][j] == 'C')
            {
                cout << "#Color\n";

                return 0;
            }
        }
    }
    cout << "#Black&White\n";

    return 0;
}