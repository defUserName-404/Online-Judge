#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void solution()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (((a + b + c) % 9 == 0) && (min(min(a, b), c) >= (a + b + c) / 9))
        cout << "YES\n";

    else
        cout << "NO\n";
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