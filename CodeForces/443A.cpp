#include <bits/stdc++.h>

using namespace std;

void solve()
{
    set<char> letters;
    int count = 0;
    string str;
    getline(cin, str);

    for (auto c : str)
        if (c >= 'a' && c <= 'z')
            letters.insert(c);

    for (auto l : letters)
        count++;

    cout << count << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}