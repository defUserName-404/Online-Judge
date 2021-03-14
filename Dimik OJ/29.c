#include <stdio.h>
#include <string.h>

int main()
{
    int loop, testCase;
    scanf("%d", &testCase);

    for (loop = 1; loop <= testCase; loop++)
    {
        char ch;
        getchar();
        scanf("%c", &ch);

        if (ch >= 'A' && ch <= 'Z')
            printf("Uppercase Character\n");
        else if (ch >= 'a' && ch <= 'z')
            printf("Lowercase Character\n");
        else if (ch >= '0' && ch <= '9')
            printf("Numerical Digit\n");
        else
            printf("Special Character\n");
    }

    return 0;
}