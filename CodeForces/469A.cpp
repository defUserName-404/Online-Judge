#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, p, q;
    cin >> n;
    vector<int> vec;

    cin >> p;
    for (int i = 0; i < p; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int y;
        cin >> y;
        vec.push_back(y);
    }
    sort(vec.begin(), vec.end());

    for (int i = 1; i <= n; i++)
    {
        if (binary_search(vec.begin(), vec.end(), i) == false)
        {
            cout << "Oh, my keyboard!\n";

            return;
        }
    }
    cout << "I become the guy.\n";

    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}