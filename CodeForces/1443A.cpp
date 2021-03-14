#include <bits/stdc++.h>

using namespace std;

int t, n;

void solution() {
    cin >> t;

    while (t--) {
        cin >> n;
        int ans = 4 * n;

        for (int i = 1; i <= n; i++) {
            cout << ans;
            ans -= 2;

            cout << ((i == n) ? '\n' : ' ');
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solution();

    return 0;
}