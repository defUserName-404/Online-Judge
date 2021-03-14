#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;

    int a[50], b[50];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    sort(a, a + n);
    sort(b, b + n, greater<int>());

    for (int i = 0; i < n; i++)
    {
        if (a[i] + b[i] > x)
        {
            cout << "No\n";

            return;
        }
    }
    cout << "Yes\n";

    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}