#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    sort(arr.begin(), arr.end());
    int count = 0;

    while (arr.size())
    {
        for (int i = 1; i < n; i++)
        {
            if (arr[i] % arr[0] == 0)
                arr.erase(arr.begin() + i);
            else
                continue;
        }
        count++;
        arr.erase(arr.begin());
        sort(arr.begin(), arr.end());
    }

    cout << count << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}