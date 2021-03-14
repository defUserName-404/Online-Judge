#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[105];
    for (int i = 0; i < n - 1; i++)
        cin >> arr[i];

    int a, b;
    cin >> a >> b;
    int sum = 0;

    for (int i = a - 1; i < b - 1; i++)
        sum += arr[i];

    cout << sum << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}