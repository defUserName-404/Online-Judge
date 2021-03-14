#include <bits/stdc++.h>

using namespace std;

string solve(string s) {
    vector<pair<string, string>> lan;
    lan = {{"HELLO", "ENGLISH"},
           {"HOLA", "SPANISH"},
           {"HALLO", "GERMAN"},
           {"BONJOUR", "FRENCH"},
           {"CIAO", "ITALIAN"},
           {"ZDRAVSTVUJTE", "RUSSIAN"}};

    for (int i = 0; i < 6; i++) {
        if (s.compare((lan.at(i)).first) == 0)
            return ((lan.at(i)).second);
    }
    return "UNKNOWN";
}

int main() {
    ios_base::sync_with_stdio(false);

    string str;

    int i = 1;

    while (cin >> str) {
        if (str.compare("#") == 0)
            return 0;
        else
            cout << "Case " << i << ": " << solve(str) << '\n';
        i++;
    }

    return 0;
}