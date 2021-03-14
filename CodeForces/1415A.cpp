#include <bits/stdc++.h>

using namespace std;

int t;
long long m, n, r, c;

void solution() {
    cin >> t;

    while (t--) {
        cin >> n >> m >> r >> c;

        // They will start escaping either from the 1,1 cell or the last cell
        cout << max(r - 1, n - r) + max(c - 1, m - c) << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solution();

    return 0;
}