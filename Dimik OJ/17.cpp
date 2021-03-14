#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    char vowels[10] = {'A', 'E', 'I', 'O', 'U',
                       'a', 'e', 'i', 'o', 'u'};

    for (int loop = 1; loop <= testCase; loop++)
    {
        int vowelCount = 0;
        char str[1001];
        getchar();
        scanf("%[^\n]", str);

        for (int i = 0; i < strlen(str); i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (str[i] == vowels[j])
                    vowelCount++;
            }
        }
        printf("Number of vowels = %d\n", vowelCount);
    }

    return 0;
}