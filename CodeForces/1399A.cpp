#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int t, n;
int arr[60];

void solution()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] - arr[i] > 1)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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