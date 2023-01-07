#include <stdio.h>
#include <string.h>

int main()
{
    int testCase;
    char num[101];
    scanf("%d", &testCase);

    for (int i = 1; i <= testCase; i++)
    {
        scanf("%s", &num);
        int lastDigit = num[strlen(num) - 1];

        (lastDigit % 2 == 0) ? printf("even\n") : printf("odd\n");
    }

    return 0;
}