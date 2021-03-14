#include <bits/stdc++.h>

using namespace std;

int t;

typedef long long ll;

ll Euclid_GCD(ll x, ll y) {
    return (y == 0) ? x : Euclid_GCD(y, x % y);
}

ll Euclid_LCM(ll x, ll y) {
    return (x / Euclid_GCD(x, y)) * y;
}

void solution() {
    ll a, b;
    cin >> a >> b;

    cout << "LCM = " << Euclid_LCM(a, b) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;

    while (t--)
        solution();

    return 0;
}