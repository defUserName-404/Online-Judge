#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    map<string, int> count;
    string str;

    for (int i = 0; i < n; i++) {
        cin >> str;

        if (count[str])
            cout << "YES\n";
        else
            cout << "NO\n";

        count[str]++;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}