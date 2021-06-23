#include <stdio.h>
#include <string.h>

void LeftRight(char in[], int l)
{
    for (int i = 0; i < l; i++)
    {
        if (in[i] == 'L')
            in[i] = in[i - 1];
        else if (in[i] == 'R')
            in[i] = in[i + 1];
    }
    printf("%s\n", in);
}

int main()
{
    int testCase;
    scanf("%d", &testCase);

    while (testCase--)
    {
        char str[51];
        scanf("%s", str);
        int len = strlen(str);

        LeftRight(str, len);
    }

    return 0;
}