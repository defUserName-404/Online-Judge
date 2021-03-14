#include <bits/stdc++.h>

using namespace std;

int t;

void solution() {
    vector<int> m;
    for (int i = 0; i < 3; i++) {
        int n;
        cin >> n;
        m.push_back(n);
    }

    sort(m.rbegin(), m.rend());

    if (m[0] != m[1])
        cout << "NO\n";

    else {
        cout << "YES\n";

        cout << m[0] << ' ' << m[2] << ' ' << m[2] << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;

    while (t--)
        solution();

    return 0;
}