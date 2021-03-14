#include <stdio.h>

int main()
{
    int testCase, loop;
    scanf("%d", &testCase);

    for (loop = 1; loop <= testCase; loop++)
    {
        unsigned long long a, b, c;
        scanf("%llu %llu %llu", &a, &b, &c);

        while (a <= b)
        {
            if (a % c == 0)
            {
                printf("%llu\n", a);
                a += c;
                continue;
            }
            a++;
        }
        printf("\n");
    }

    return 0;
