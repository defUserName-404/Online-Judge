#include <bits/stdc++.h>

using namespace std;

int t, n;
int arr[305];

void solution()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int temp[305];
    int l = 0, r = n - 1;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            temp[i] = arr[l];
            l++;
        }
        else
        {
            temp[i] = arr[r];
            r--;
        }
    }
    for (int i = 0; i < n; i++)
        cout << temp[i] << ' ';

    cout << '\n';
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