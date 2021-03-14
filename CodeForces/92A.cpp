#include <bits/stdc++.h>

using namespace std;

void solve(int n, int m)
{
    m %= (n * (n + 1)) / 2;

    int temp = 0;
    for (int i = 1; i <= n; i++)
    {
        if (temp + i <= m)
            temp += i;
        else
            break;
    }
    cout << m - temp << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    solve(n, m);

    return 0;
}