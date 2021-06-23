#include <stdio.h>
#include <string.h>

int main()
{
    int loop, testCase;
    scanf("%d", &testCase);

    for (loop = 1; loop <= testCase; loop++)
    {
        int a, b, i;
        scanf("%d %d", &a, &b);

        if (a <= b)
        {
            for (i = a; i <= b; i++)
            {
                if (i % a == 0)
                    printf("%d\n", i);
            }
        }
        else
            printf("Invalid!\n");

        printf("\n");
    }

    return 0;
}