#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    string cur, key;
    cin >> cur >> key;
    int count = 0;

    for (int i = 0; i < n; i++)
        count += min(abs(cur[i] - key[i]), 10 - abs(cur[i] - key[i]));

    cout << count << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}