#include <bits/stdc++.h>

using namespace std;

void solve(int p[], int n)
{
    int min = p[0], max = p[0];
    int amazing = 0;

    for (int i = 0; i < n; i++)
    {
        if (p[i] > max)
        {
            max = p[i];
            amazing++;
        }
        if (p[i] < min)
        {
            min = p[i];
            amazing++;
        }
    }
    cout << amazing << "\n";
}

int main()
{
    int t;
    cin >> t;

    int p[1001]; // points earned in the contests

    for (int i = 0; i < t; i++)
        cin >> p[i];

    solve(p, t);

    return 0;
}