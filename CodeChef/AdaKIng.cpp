#include <bits/stdc++.h>

using namespace std;

int a, b, c, i, j, k, m, n, p, q, r, t, x, y, z;
int testCase;

void solve()
{
    int count = 0;
    cin >> r >> c >> k;

    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            if (max(abs(r - i), abs(c - j)) <= k)
                count++;
        }
    }
    cout << count << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> testCase;

    while (testCase--)
        solve();

    return 0;
}