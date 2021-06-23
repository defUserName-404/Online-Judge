#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testCase, n;

    cin >> testCase;

    for (int loop = 1; loop <= testCase; loop++)
    {
        cin >> n;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << "*";
            }
            cout << "\n";
        }
        if (loop != testCase)
            cout << "\n";
    }

    return 0;
}