#include <bits/stdc++.h>

using namespace std;

int t, c, r;
int arr[11][11];

void solution()
{
    cin >> r >> c;

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> arr[i][j];

    int min_c = INT_MAX, min_r = INT_MAX;
    int neg_c = 0, neg_r = 0, sum = 0;
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