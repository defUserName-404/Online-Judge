#include <bits/stdc++.h>

using namespace std;

int solve()
{
    int n;
    cin >> n;

    int arr[25], arr_temp[25];
    // arr_temp[] will hold the value of the original array to compare it with the sorted array later

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr_temp[i] = arr[i];
    }

    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        if (arr_temp[i] != arr[i])
        {
            cout << "NO\n";

            return 0;
        }
    }
    cout << "YES\n";

    return 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}