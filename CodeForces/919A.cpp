#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, m;
    scanf("%d %d", &n, &m);

    double Min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        Min = min(Min, (double)a / b);
    }

    printf("%.8lf\n", Min * m);
}

int main()
{
    cin.tie(NULL);

    solve();

    return 0;
}