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
        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        sort(v.begin(), v.end());

        int l = 0, h = v.size() - 1;

        cout << 2 * (v.at(h) - v.at(l)) << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}