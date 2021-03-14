#include <bits/stdc++.h>

using namespace std;

int t;

void solution() {
    string str;
    getline(cin, str);

    stringstream ss(str);
    int num, count = 0;

    while (ss >> num)
        count++;

    cout << count << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;
    cin.ignore();

    while (t--)
        solution();

    return 0;
}