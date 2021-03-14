#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n, sum;
    // n = number of coins, sum = sum of coins

    cin >> n >> sum;

    // since the number of a given coin is infinte, we can take the coin with the max value as many times as we want

    double count1 = (double)sum / n;
    int count2 = sum / n;

    (count1 - count2 >= 0.000000001) ? cout << count2 + 1 << "\n" : cout << count2 << "\n";

    return 0;
}