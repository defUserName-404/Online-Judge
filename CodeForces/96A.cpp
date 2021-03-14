#include <bits/stdc++.h>

using namespace std;

void solution()
{
    string pos;
    cin >> pos;

    int count = 1;

    for (int i = 0; i < pos.length(); i++)
    {
        if (pos[i] == pos[i + 1])
        {
            count++;
            if (count == 7)
            {
                cout << "YES\n";
                return;
            }
        }
        else
            count = 1;
    }

    cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solution();

    return 0;
}