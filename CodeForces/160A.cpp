#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a, b, ta, tb;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
        ta.push_back(x);
    }
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        b.push_back(x);
        tb.push_back(x);
    }
    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());
    bool sa, sb;
    for (int i = 0; i < n; i++) {
        if (a.at(i) == ta.at(i))
            sa = true;
        else {
            sa = false;
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        if (b.at(i) == tb.at(i))
            sb = true;
        else {
            sb = false;
            break;
        }
    }
    if (sa && sb) {
        sort(a.rbegin(), a.rend());
        sort(b.begin(), b.end());
        for (int i = 0; i < n; i++) {
            if (a.at(i) + b.at(i) < k)
                cout << "NO\n";
            return;
        }
        cout << "YES\n";
        return;
    } else {
        for (int i = 0; i < n; i++) {
            if (a.at(i) + b.at(i) < k)
                cout << "NO\n";
            return;
        }
        cout << "YES\n";
        return;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}