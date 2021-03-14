#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string str;
    cin >> str;

    int flag = 0;
    bool condition;
    condition = (str.at(0) >= 'a' && str.at(0) <= 'z');

    for (int i = 1; i < str.length(); i++)
        if (str.at(i) >= 'A' && str.at(i) <= 'Z')
            flag++;

    if (flag == str.length() - 1)
    {
        for (int i = 1; i < str.length(); i++)
            str.at(i) += 32;
        if (condition)
            str.at(0) -= 32;
        else if (!condition)
            str.at(0) += 32;

        cout << str << '\n';
        return;
    }

    if (str.length() == 1 && condition)
    {
        str.at(0) -= 32;
        return;
    }

    cout << str << '\n';
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}