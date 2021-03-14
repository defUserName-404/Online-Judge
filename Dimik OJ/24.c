#include <stdio.h>

int main()
{
    int testCase, loop;
    scanf("%d", &testCase);

    for (loop = 1; loop <= testCase; loop++)
    {
        int n, i;
        scanf("%d", &n);

        int num_arr[10000];

        for (i = 0; i < n; i++)
            scanf("%d", &num_arr[i]);

        printf("%d", num_arr[0]);

        for (i = 2; i < n; i += 2)
            printf(" %d", num_arr[i]);

        printf("\n");
    }

    return 0;
