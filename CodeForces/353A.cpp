#include <bits/stdc++.h>

using namespace std;

void solution()
{
    int sum_u = 0, sum_b = 0, count = 0;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int upper, bottom;
        cin >> upper >> bottom;

        if (upper % 2 != bottom % 2)
            count++;

        sum_u += upper;
        sum_b += bottom;
    }

    if (sum_u % 2 == 0 && sum_b % 2 == 0)
        cout << "0\n";
    else if ((sum_u % 2 == sum_b % 2) && count)
        cout << "1\n";
    else
        cout << "-1\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solution();

    return 0;
}