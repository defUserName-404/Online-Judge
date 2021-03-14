#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[50];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int m_o = 0, m_e = 0; // m_o = misplaced odd and m_e = misplaced even

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0 && arr[i] % 2 != 0)
                ++m_e;
            if (i % 2 != 0 && arr[i] % 2 == 0)
                ++m_o;
        }

        (m_e == m_o) ? cout << m_e : cout << "-1";
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