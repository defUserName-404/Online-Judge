#include <math.h>
#include <stdio.h>

void isPrime(long long n)
{
    int count = 0;

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

int main()
{
    int testCase;
    scanf("%d", &testCase);

    for (int i = 1; i <= testCase; i++)
    {
        long long num;
        scanf("%lld", &num);

        isPrime(num);
    }

    return 0;
}