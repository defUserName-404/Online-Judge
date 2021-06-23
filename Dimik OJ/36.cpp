#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solution()
{
    ll N;
    cin >> N;

    ll rev = 0, temp;

    while (N != 0)
    {
        temp = N % 10;
        rev = rev * 10 + temp;
        N /= 10;
    }

    cout << rev << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testCase;

    cin >> testCase;
    cin.ignore();

    while (testCase--)
        solution();

    return 0;
}