#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long a, b, c, n, sum;
        cin >> a >> b >> c >> n;
        sum = a + b + c + n;

        if (sum % 3 == 0)
        {
            long long avg = sum / 3;
            if (a <= avg && b <= avg && c <= avg)
                cout << "YES\n";
            else
                cout << "NO\n";
        }

        else
            cout << "NO\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}