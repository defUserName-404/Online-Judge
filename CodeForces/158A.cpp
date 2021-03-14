#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    int arr[60];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] >= arr[k - 1]) && arr[i] > 0)
            count++;
    }
    cout << count << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}