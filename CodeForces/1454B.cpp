#include <bits/stdc++.h>

using namespace std;

int t, n;
int a[200005], temp[200005];

void solve()
{
    cin >> t;

    while (t--)
    {
        cin >> n;

        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a + n);

        bool isPresent;

        for (int i = 0; i < n; i++)
        {
            isPresent = binary_search(a + i + 1, a + n, a[i]);
            if (!isPresent)
                temp[i] = a[i];
        }

        (temp[0] == '\0') ? cout << "-1" : cout << temp[0];
        cout << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}