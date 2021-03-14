#include <bits/stdc++.h>

using namespace std;

int t, n;
int f, l;
int arr[55];

void solution()
{
    cin >> t;

    while (t--)
    {
        int cnt = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                f = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] == 1)
            {
                l = i;
                break;
            }
        }
        for (int i = f; i <= l; i++)
        {
            if (arr[i] == 0)
                cnt++;
        }
        cout << cnt << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solution();

    return 0;
}