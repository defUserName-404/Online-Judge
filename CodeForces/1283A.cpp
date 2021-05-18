#include <bits/stdc++.h>

using namespace std;

int t;
int h, m;

void solution()
{
    cin >> h >> m;

    cout << ((23 - h) * 60) + (60 - m) << '\n';
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