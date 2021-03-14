#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solution()
{
    long long n;
    cin >> n;

    // lcm of numbers 2 from 10 = 2520
    ll lcm = 2520;

    cout << n / lcm << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solution();

    return 0;
}