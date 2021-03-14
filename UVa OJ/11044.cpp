#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int t;
    cin >> t;

    while (t--)
    {
        int m, n;
        cin >> m >> n;
        // each sonar cover exactly three cells in a row and in a column
        cout << ((m / 3) * (n / 3)) << '\n';
    }
}

int main()
{
    solve();

    return 0;
}