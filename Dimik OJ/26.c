#include <stdio.h>

int main()
{
    int testCase, loop;
    scanf("%d", &testCase);

    for (loop = 1; loop <= testCase; loop++)
    {
        double food;
        int days = 0;
        scanf("%lf", &food);

        while (food >= 1)
        {
            food /= 2.0;
            days++;
        }

        printf("%d days\n", days);
    }

    return 0;
}