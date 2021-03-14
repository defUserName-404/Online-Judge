#include <bits/stdc++.h>

using namespace std;

void solution() {
    string s1, s2;
    cin >> s1 >> s2;

    int key1 = 1, key2 = 1;

    for (char i : s1) {
        if ((i >= 'a') && (i <= 'z'))
            key1 *= (i - 'a') % 97;
        else if ((i >= 'A') && (i <= 'Z'))
            key1 *= (i - 'A') % 97;
    }

    for (char i : s2) {
        if ((i >= 'a') && (i <= 'z'))
            key2 *= (i - 'a') % 97;
        else if ((i >= 'A') && (i <= 'Z'))
            key2 *= (i - 'A') % 97;
    }

    key1 %= 97;
    key2 %= 97;

    cout << ((key1 == key2) ? "YES\n" : "NO\n");
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    cin.ignore();

    while (t--)
        solution();

    return 0;
}