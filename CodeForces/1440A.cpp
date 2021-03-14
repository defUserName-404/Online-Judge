#include <bits/stdc++.h>

using namespace std;

int t, n, c0, c1, h;
string bin;

void solution()
{
    cin >> n >> c0 >> c1 >> h;
    cin >> bin;
    int sum = 0;

    for (auto i : bin)
    {
        if (i == '0')
            sum += min(c1 + h, c0);
        else
            sum += min(c0 + h, c1);
    }

    cout << sum << '\n';
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