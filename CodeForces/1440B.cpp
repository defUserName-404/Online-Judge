#include <bits/stdc++.h>

using namespace std;

int t, n, k;
int arr[1000005];

void solution()
{
    cin >> n >> k;

    int sum = 0, count = 0;

    for (int i = 0; i < n * k; i++)
        cin >> arr[i];

    //sort(arr, arr + n * k, greater<int>());

    for (int i = n * k - 1; i >= 0; i--)
    {
        if (n == 2 && i % 2 == 0)
        {
            sum += arr[i];
            count++;
        }
        else if (n != 2 && i % (n - 1) == 0)
        {
            sum += arr[i];
            count++;
        }

        if (count == k)
            break;
    }
    cout << sum << '\n';
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