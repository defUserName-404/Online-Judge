#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b, n;
    cin >> n >> a >> b;

    cout << min(n - a, b + 1) << "\n";

    return 0;
}