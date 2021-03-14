#include <stdio.h>
#include <string.h>

void charCount(char in[1001])
{
    int count[26];
    size_t len = strlen(in);
    size_t i, j;

    for (i = 0; i < 26; i++)
        count[i] = 0;

    for (j = 0; j < len; j++)
    {
        if (in[j] >= 'A' && in[j] <= 'Z')
            in[j] = in[j] + 32;
    }

    for (i = 0; i < len; i++)
        count[in[i] - 97]++;

    for (i = 0; i < 26; i++)
    {
        if (count[i] > 0)
            printf("%c = %d\n", i + 97, count[i]);
    }
}

int main()
{
    int testCase;
    char str[1001];

    scanf("%d", &testCase);

    int loop;
    for (loop = 1; loop <= testCase; loop++)
    {
        getchar();
        scanf("%[^\n]", str);

        charCount(str);

        if (loop < testCase)
            printf("\n");
    }

    return 0;
}