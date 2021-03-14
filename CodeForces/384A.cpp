#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    int c[1005][1005];
    int count = 0;

    for (int i = 0; i < n; i++)
        (i % 2 == 0) ? count += ceil(n / 2) : count += floor(n / 2);

    cout << count << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}