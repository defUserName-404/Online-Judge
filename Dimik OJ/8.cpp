#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    for (int loop = 1; loop <= testCase; loop++)
    {
        int num[3];

        for (int i = 0; i < 3; i++)
            cin >> num[i];

        sort(num, num + 3);

        cout << "Case " << loop << ": ";

        for (int i = 0; i < 3; i++)
        {
            cout << num[i];

            if (i != 2)
                cout << " ";
        }

        cout << "\n";
    }

    return 0;
}