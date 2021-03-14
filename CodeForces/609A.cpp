#include <bits/stdc++.h>

using namespace std;

void solve(int a[], int n, int file)
{
    sort(a, a + n, greater<int>());

    int sum, count;
    sum = count = 0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        count++;

        if (sum >= file)
        {
            cout << count << "\n";
            break;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int m, n;
    int arr[100];

    cin >> n >> m;
    // n = number of flash drive, m = size of the file

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    solve(arr, n, m);

    return 0;
}