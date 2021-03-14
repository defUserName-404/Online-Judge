#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k, t;
    cin >> n >> k >> t;

    cout << min(min(t, k), n + k - t) << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}