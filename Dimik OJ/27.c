#include <stdio.h>
#include <string.h>
#include <math.h>

void isArmstrong(int input)
{
    int i, digit;
    int sum = 0;
    int temp = input;

    for (i = 1; i <= 3; i++)
    {
        digit = temp % 10;

        sum += pow(digit, 3);

        temp /= 10;
    }

    (sum == input) ? printf("%d is an armstrong number!\n", input) : printf("%d is not an armstrong number!\n", input);
}

int main()
{
    int testCase;
    scanf("%d", &testCase);

    while (testCase--)
    {
        int num;

        scanf("%d", &num);

        isArmstrong(num);
    }

    return 0;
}