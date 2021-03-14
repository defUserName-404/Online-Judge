#include <bits/stdc++.h>

using namespace std;

int t, n;

void solution() {
    cin >> n;

    cout << ((n % 4 == 0) ? "YES\n" : "NO\n");
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;

    while (t--)
        solution();

    return 0;
}