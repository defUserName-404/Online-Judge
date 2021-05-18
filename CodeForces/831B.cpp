#include <bits/stdc++.h>

using namespace std;

string l1, l2, in;

void solution()
{
    cin >> l1 >> l2 >> in;

    map<char, char> m;

    for (int i = 0; i < l1.size(); i++)
    {
        m[l1[i]] = l2[i];
        m[l1[i] - 32] = l2[i] - 32;
    }

    for (int i = 0; i < in.size(); i++)
    {
        if (m[in[i]] != '\0')
            cout << m[in[i]];
        else
            cout << in[i];
    }

    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solution();

    return 0;
}