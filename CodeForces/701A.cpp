#include <bits/stdc++.h>

using namespace std;

void solve(int a[], int n)
{
    int temp = 0;

    for (int i = 0; i < n; i++)
        temp += a[i];

    int targetSum = (temp / (n / 2));

    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            for (int j = 1; j <= n; j++)
            {
                if (a[i] + a[j] == targetSum && i != j)
                {
                    cout << i + 1 << " " << j + 1 << "\n";
                    a[i] = 0;
                    a[j] = 0;
                }
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int arr[101];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    solve(arr, n);

    return 0;
}