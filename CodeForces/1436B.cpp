#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
    if (n == 2)
        return true;
    else if (n > 2)
    {
        for (int i = 2; i < sqrt(n); i++)
        {
            if (n % i == 0)
                return false;
            else
                continue;
        }
        return true;
    }
}

void solve(int n)
{
    if (isPrime(n))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout << "1 ";

            cout << "\n";
        }
    }

    else
    {
        int tmp = 
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testCase;
    cin >> testCase;

    while (testCase--)
    {
        int n;
        cin >> n;

        solve(n);
    }

    return 0;
}