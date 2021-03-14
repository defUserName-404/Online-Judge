#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    for (int i = 1; i <= testCase; i++)
    {
        int x, n;
        long long sum_of_series = 0;

        cin >> x >> n;

        for (int j = 0; j <= n; j++)
            sum_of_series += pow(x, j);

        cout << "Result = " << sum_of_series << endl;
    }

    return 0;
}