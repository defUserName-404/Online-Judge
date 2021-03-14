#include <bits/stdc++.h>

using namespace std;

void solve(char s[])
{
    int l = strlen(s);

    stack<char> sub;

    for (int i = 0; i < l; i++)
    {
        if (s[i] != ' ')
            sub.push(s[i]);

        else
        {
            while (!sub.empty())
            {
                cout << sub.top();
                sub.pop();
            }
            cout << ' ';
        }
    }
    while (!sub.empty())
    {
        cout << sub.top();
        sub.pop();
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        char str[1001];
        getchar();
        scanf("%[^\n]", str);

        solve(str);
        cout << '\n';
    }

    return 0;
}