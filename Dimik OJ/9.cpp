#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    for (int i = 1; i <= testCase; i++)
    {
        long long num;
        cin >> num;

        double square_root = sqrt(num);
        double diff = ceil(square_root) - floor(square_root);

        (diff < 0.000001) ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}