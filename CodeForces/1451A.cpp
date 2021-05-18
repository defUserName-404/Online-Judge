#include <bits/stdc++.h>

using namespace std;

int t;

void solution()
{
    int n;
    cin >> n;

    if (n <= 3)
        cout << n - 1 << '\n';

    else
        cout << ((n & 1) ? "3\n" : "2\n");
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