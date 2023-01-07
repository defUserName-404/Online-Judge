#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testcase;

    cin >> testcase;

    for (int i = 1; i <= testcase; i++)
    {
        int n;
        cin >> n;

        (n % 2 == 0) ? cout << "even\n" : cout << "odd\n";
    }

    return 0;
}