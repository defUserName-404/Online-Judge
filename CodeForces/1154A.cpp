#include <bits/stdc++.h>

using namespace std;

int e[5];

void solution()
{
    for (int i = 0; i < 4; i++)
        cin >> e[i];

    sort(e, e + 4, greater<int>());

    for (int i = 1; i < 4; i++)
        cout << e[0] - e[i] << ' ';

    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solution();

    return 0;
}