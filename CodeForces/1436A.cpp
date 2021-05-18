#include <bits/stdc++.h>

using namespace std;

#define Pi 3.14159
#define Mod 10000000007

typedef long long ll;

void solution()
{
    int n, m;
    cin >> n >> m;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        sum += x;
    }

    cout << ((sum == m) ? "YES\n" : "NO\n");
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testCase;

    cin >> testCase;

    while (testCase--)
        solution();

    return 0;
}