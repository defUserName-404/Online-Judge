#include <bits/stdc++.h>

using namespace std;

void solution() {
    string str;
    getline(cin, str);

    int count = 1;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ' && str[i - 1] != ' ')
            count++;
    }

    cout << "Count = " << count << "\n";
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