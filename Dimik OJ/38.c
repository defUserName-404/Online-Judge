#include <stdio.h>

void diamond(int m, int n)
{
    int i, j;

    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= i; j++)
        {
            (i == j) ? printf("%d", n) : printf("%d ", n);
        }
        printf("\n");
    }

    for (i = m - 1; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            (i == j) ? printf("%d", n) : printf("%d ", n);
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int loop, testCase;
    scanf("%d", &testCase);

    for (loop = 1; loop <= testCase; loop++)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        diamond(a, b);
    }

    return 0;
}