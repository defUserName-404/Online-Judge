#include <bits/stdc++.h>

using namespace std;

void solve(int n)
{
    string str;
    int bit = 0;

    while (n--)
    {
        cin >> str;

        if (str == "++X" || str == "X++")
            bit++;
        else
            bit--;
    }

    cout << bit << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int x;
    cin >> x;

    solve(x);

    return 0;
}