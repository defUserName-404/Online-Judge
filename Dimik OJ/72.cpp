#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    for (int i = 1; i <= testCase; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a + b > c && b + c > a && a + c > b)
        {
            double s = (a + b + c) / 2.0;
            double area = sqrt(s * (s - a) * (s - b) * (s - c));

            printf("%.2lf\n", area);
        }

        else
            printf("Oh, No!\n");
    }

    return 0;
}