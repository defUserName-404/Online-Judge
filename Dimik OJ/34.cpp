#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
/*
ll Euclid_GCD(ll a, ll b) {
    return (b == 0) ? b : Euclid_GCD(b, a % b);
}

ll Euclid_LCM(ll a, ll b) {
    return (a / Euclid_GCD(a, b)) * b;
}
*/
void solution(ll &a, ll &b, ll &c) {
    //ll lcm = Euclid_LCM(a, b);
    cout << a + b + c << endl;
    /*
    for (num = lcm; num <= c; num += lcm) {
        cout << num << "\n";
    }
    cout << "\n";
    */
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testCase;

    cin >> testCase;

    while (testCase--) {
        ll a, b, c;
        cin >> a >> b >> c;

        solution(a, b, c);
    }

    return 0;
}