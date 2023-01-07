#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testCase, n;
    long long fact;

    cin >> testCase;

    for (int loop = 1; loop <= testCase; loop++)
    {
        cin >> n;
        fact = 1;

        for (int i = 1; i <= n; i++)
            fact *= i;

        cout << fact << endl;
    }

    return 0;
}