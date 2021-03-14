#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i * (i + 1) / 2 == n)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}