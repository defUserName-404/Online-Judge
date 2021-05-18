#include <bits/stdc++.h>

using namespace std;

int t, x, y, a, b;

void solution()
{
    cin >> x >> y >> a >> b;

    if ((y - x) % (a + b) == 0)
        cout << (y - x) / (a + b) << '\n';

    else
        cout << "-1\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;

    while (t--)
        solution();

    return 0;
}