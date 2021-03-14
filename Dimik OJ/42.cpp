#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    for (int i = 1; i <= testCase; i++)
    {
        int n;
        cin >> n;

        if (n != 0)
        {
            for (int i = n; i >= 2; i--)
                printf("2^%d + ", i);

            printf("2 + 1\n");
        }
        else if (n == 0)
            printf("1\n");
    }

    return 0;
}