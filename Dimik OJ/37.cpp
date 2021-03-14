#include <bits/stdc++.h>

using namespace std;

void solve()
{
    vector<string> words;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        words.push_back(s);
    }

    sort(words.begin(), words.end());

    for (int i = 0; i < n; i++)
        cout << words.at(i) << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}