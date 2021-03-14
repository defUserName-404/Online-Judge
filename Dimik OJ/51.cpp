#include <bits/stdc++.h>

using namespace std;

void solution() {
    string str, sub;
    cin >> str >> sub;

    cout << str.find(sub) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testCase;

    cin >> testCase;
    cin.ignore();

    while (testCase--)
        solution();

    return 0;
}