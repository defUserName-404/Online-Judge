#include <stdio.h>

int main()
{
    int testCase, loop;
    scanf("%d", &testCase);

    for (loop = 1; loop <= testCase; loop++)
    {
        unsigned long long int x, sum = 0, i;
        scanf("%llu", &x);

        for (i = 1; i < x; i++)
        {
            if (x % i == 0)
                sum += i;
        }

        if (sum == x)
            printf("YES, %llu is a perfect number!\n", x);
        else
            printf("NO, %llu is not a perfect number!\n", x);
    }

    return 0;
}
