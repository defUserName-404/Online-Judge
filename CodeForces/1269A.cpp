#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    /*
     9 - 8 = 1
     .........
     .........
     9 * n - 8 * n = n 
    */

    cout << 9 * n << ' ' << 8 * n << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}