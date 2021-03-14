#include <bits/stdc++.h>

using namespace std;

int d;
char str[110];

void solve()
{
    while ((scanf("%d %s", &d, str)) != EOF)
    {
        int count = 0;
        for (int i = 0; i < d; i++)
        {
            if (str[i] == '8')
                count++;
        }
        printf("%d\n", min(count, (d / 11)));
    }
}

int main()
{
    solve();

    return 0;
}