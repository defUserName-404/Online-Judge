#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;

    int l1, l2, sum;

    l1 = min({k2, k5, k6});

    l2 = min({k2 - l1, k3});

    sum = l1 * 256 + l2 * 32;

    cout << sum << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}