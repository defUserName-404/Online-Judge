#include <bits/stdc++.h>

using namespace std;

int main()
{
    int count = 0;

    for (int i = 1000; i >= 1; i--)
    {
        cout << i << "\t";
        count++;

        if (count == 5)
        {
            cout << "\n";
            count = 0;
        }
    }

    return 0;
}