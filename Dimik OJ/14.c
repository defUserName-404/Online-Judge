#include <stdio.h>
#include <string.h>

void out(char in[], char c)
{
    int count = 0;
    int i;

    for (i = 0; i < strlen(in); i++)
    {
        if (in[i] == c)
            count++;
    }
    if (count > 0)
        printf("Occurrence of '%c' in '%s' = %d\n", c, in, count);
    else
        printf("'%c' is not present\n", c);
}

int main()
{
    int testCase, i;
    char str[10001];
    char ch;
    scanf("%d", &testCase);

    for (i = 1; i <= testCase; i++)
    {
        getchar();
        gets(str);
        ch = getchar();

        out(str, ch);
    }

    return 0;
}