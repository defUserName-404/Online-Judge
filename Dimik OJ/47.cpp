#include <bits/stdc++.h>

using namespace std;

void solution() {
    int n1, n2;
    vector<int> a;

    cin >> n1;
    for (int i = 0; i < n1; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }

    cin >> n2;
    for (int i = 0; i < n2; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < n1 + n2; i++) {
        cout << a[i];

        if (i != (n1 + n2 - 1))
            cout << ' ';
    }

    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
        solution();

    return 0;
}