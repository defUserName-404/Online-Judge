#include <bits/stdc++.h>

using namespace std;

void solve(int m, int n);

int main()
{
    int i, j;

    while (scanf("%d %d", &i, &j) != EOF)
    {
        cout << i << " " << j << " ";
        solve(i, j);
    }

    return 0;
}

void solve(int m, int n)
{
    if (m > n)
        swap(m, n);

    int max_cycle_length = 0;
    int cycle_length;

    while (m <= n)
    {
        unsigned int i = m;
        cycle_length = 1;

        while (i != 1)
        {
            if (i % 2 == 1)
                i = 3 * i + 1;
            else
                i /= 2;
            cycle_length++;
        }

        if (cycle_length > max_cycle_length)
            max_cycle_length = cycle_length;

        m++;
    }

    cout << max_cycle_length << "\n";
}