#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    stack<int> bill;

    bill.push(1);
    bill.push(5);
    bill.push(10);
    bill.push(20);
    bill.push(100);

    int count = 0;

    while (n)
    {
        while (bill.top() <= n)
        {
            count++;
            n -= bill.top();
        }
        bill.pop();
    }

    cout << count << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}