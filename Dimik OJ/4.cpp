#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testCase, n;

    cin >> testCase;

    for (int i = 1; i <= testCase; i++)
    {
        cin >> n;
        cout << "Case " << i << ": ";
        for (int j = 1; j < n; j++)
        {
            if (n % j == 0)
                cout << j << " ";
        }
        cout << n << endl;
    }

    return 0;
}