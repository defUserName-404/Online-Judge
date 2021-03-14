#include <bits/stdc++.h>

using namespace std;

void isPrime(long long n)
{
    int count = 0;

    if (n == 0 || n == 1)
        printf("%lld is not a prime\n", n);

    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i != 0)
                continue;
            else
            {
                count++;
                break;
            }
        }
        (count > 0) ? printf("%lld is not a prime\n", n) : printf("%lld is a prime\n", n);
    }
}

int main()
{
    int testCase;
    cin >> testCase;

    for (int i = 1; i <= testCase; i++)
    {
        long long n;
        cin >> n;

        isPrime(n);
    }

    return 0;
}