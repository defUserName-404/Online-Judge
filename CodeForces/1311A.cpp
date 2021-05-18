#include <bits/stdc++.h>

using namespace std;

int solve()
{
    int a, b;
    cin >> a >> b;
    int d = a - b;

    if (d == 0)
        return 0;

    else if (d > 0)
    {
        if (abs(d) % 2 == 0)
            return 1;
        else
            return 2;
    }

    else
    {
        if (abs(d) % 2 == 0)
            return 2;
        else
            return 1;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
        cout << solve() << '\n';

    return 0;
}