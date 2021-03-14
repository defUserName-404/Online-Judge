#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    int perfectNum[5] = {6, 28, 496, 8128, 33550336};

    while (testCase--)
    {
        int r;
        cin >> r;

        for (int i = 0; i < 5; i++)
        {
            if (perfectNum[i] <= r)
                cout << perfectNum[i] << '\n';

            else
                break;
        }
        if (testCase != 0)
            cout << '\n';
    }

    return 0;
}