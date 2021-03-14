#include <bits/stdc++.h >

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int rec = 0, crime = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x > 0)
            rec += x;

        else
        {
            if (rec < 1)
                ++crime;
            else
                --rec;
        }
    }
    cout << crime << '\n';
}

int main()
{
    solve();

    return 0;
}