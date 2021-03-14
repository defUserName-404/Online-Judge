#include <bits/stdc++.h>

using namespace std;

typedef unsigned int ui;

void solve(string s)
{
    if (s[0] >= 'a' && s[0] <= 'z')
        s[0] -= 32;

    cout << s << "\n";
}

int main()
{
    string str;
    cin >> str;

    solve(str);

    return 0;
}