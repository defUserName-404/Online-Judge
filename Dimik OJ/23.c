#include <stdio.h>
#include <string.h>

int main()
{
    int loop, testCase;
    scanf("%d", &testCase);

    for (loop = 1; loop <= testCase; loop++)
    {
        char str[101];
        getchar();
        scanf("%[^\n]", str);

        int i;
        for (i = 0; i < strlen(str); i++)
        {
            printf("%d", str[i] - 64);
        }
        printf("\n");
    }

    return 0;
}