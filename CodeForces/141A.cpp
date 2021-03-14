#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string n1, n2, p;
    cin >> n1 >> n2 >> p;

    string sub;
    sub = n1 + n2;

    sort(sub.begin(), sub.end());
    sort(p.begin(), p.end());

    (sub.compare(p)) ? cout << "NO" : cout << "YES";
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}