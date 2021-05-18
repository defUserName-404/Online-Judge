#include <bits/stdc++.h>

using namespace std;

int t, n;
int arr[1010];

void solution()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1])
        {
            cout << "YES\n";
            cout << i << ' ' << i + 1 << ' ' << i + 2 << '\n';
            return;
        }
    }
    cout << "NO\n";
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