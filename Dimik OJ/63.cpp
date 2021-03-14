#include <bits/stdc++.h>

using namespace std;

string str;
int key;

void solution() {
    getline(cin, str);
    cin >> key;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = 'a' + ((str[i] - 'a' + key) % 26);

        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = 'A' + ((str[i] - 'A' + key) % 26);
    }
    cout << str << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solution();

    return 0;
}