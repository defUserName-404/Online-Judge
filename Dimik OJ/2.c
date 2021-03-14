#include <stdio.h>
#include <string.h>

int main()
{
    int testCase, i;
    char num[101];
    scanf("%d", &testCase);

    for (i = 1; i <= testCase; i++)
    {
        scanf("%s", &num);

        int len = strlen(num) - 1;
        int lastDigit = num[len];

        (lastDigit % 2 == 0) ? printf("even\n") : printf("odd\n");
    }

    return 0;
}