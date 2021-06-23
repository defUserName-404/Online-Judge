#include <bits/stdc++.h>

using namespace std;

long long factorial(int n)
{
    long long fact = 1;

    for (int i = 1; i <= n; i++)
        fact *= i;

    return fact;
}

int main()
{
    int testCase;
    cin >> testCase;

    for (int i = 1; i <= testCase; i++)
    {
        int n;
        cin >> n;
        double sum_of_series = 0;

        for (int j = 1; j <= n; j++)
            sum_of_series += (double)j / factorial(j);

        printf("%.4lf\n", sum_of_series);
    }

    return 0;
}