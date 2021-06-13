#include <bits/stdc++.h>

using namespace std;

/*
 g = total number of games
 n = number of coins
 i = starting position
 q = particular position after all the rotations
*/

int g, n, i, q;
int testCase;

void solve()
{
    cin >> g;

    while (g--)
    {
        cin >> i >> n >> q;

        if (n % 2 == 0)
            cout << n / 2 << "\n";

        else
        {
            if (i == q)
                cout << n / 2 << "\n";
            else
                cout << n - (n / 2) << "\n";
        }
    }
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