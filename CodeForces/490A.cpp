#include <bits/stdc++.h>

using namespace std;

void solution()
{
    int n;
    cin >> n;
    vector<int> p, m, e;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
            p.push_back(i + 1);
        else if (x == 2)
            m.push_back(i + 1);
        else
            e.push_back(i + 1);
    }
    int w = min(p.size(), min(m.size(), e.size()));
    cout << w << '\n';
    if (w >= 1)
    {
        for (int i = 0; i < w; i++)
            cout << p.at(i) << ' ' << m.at(i) << ' ' << e.at(i) << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solution();

    return 0;
}