#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n, price;
int testCase;

void solve()
{
    ll price_total = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> price;

        price_total += price;
    }
    cout << (price_total + n - 1) / n << "\n";
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