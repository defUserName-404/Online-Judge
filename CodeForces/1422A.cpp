#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve()
{
    int t;
    cin >> t;
    ll a, b, c, d;

    while (t--)
    {
        cin >> a >> b >> c;
        d = ((a + b + c) - 1);
        cout << d << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}