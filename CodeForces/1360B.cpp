#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr;

    while (n--)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    sort(arr.begin(), arr.end());

    int diff = INT_MAX;

    for (int i = 0; i < arr.size() - 1; i++)
    {
        if ((arr.at(i + 1) - arr.at(i)) < diff)
            diff = arr.at(i + 1) - arr.at(i);
    }
    cout << diff << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie();

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}