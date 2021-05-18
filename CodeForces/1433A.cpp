#include <bits/stdc++.h>

using namespace std;

/* 1 + 11 + 111 + 1111 = 10
2 + 22 + 222 + 2222 = 20
.......
n + (10n+2n) + ......
*/

string n;
int testCase;

void solve()
{
    cin >> testCase;

    while (testCase--)
    {
        cin >> n;

        int digSum;

        int dig = n[0] - '0' - 1;
        int len = n.length();

        digSum = dig * 10 + len * (len + 1) / 2;

        cout << digSum << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}