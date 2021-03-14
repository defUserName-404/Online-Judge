#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    while (scanf("%d", &n) && n)
    {
        double diff1, diff2;

        diff1 = (pow(n, 1 / 2));
        diff2 = (pow(n, 1 / 3));

        if ((pow(diff1, 2) == n) && (pow(diff2, 3) == n))
            cout << "Special\n";

        else
            cout << "Ordinary\n";
    }

    return 0;
}