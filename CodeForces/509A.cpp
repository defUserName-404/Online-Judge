#include <bits/stdc++.h>

using namespace std;

void solve(int n)
{
    int arr[10][10];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0)
                arr[i][j] = 1;
            else if (j == 0)
                arr[i][j] = 1;
            else
                arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
        }
    }

    cout << arr[n - 1][n - 1] << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    solve(n);

    return 0;
}