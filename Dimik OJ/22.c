#include <math.h>
#include <stdio.h>

void primeCount(int x, int y) {
    int i, j, count = 0;
    for (i = x; i <= y; i++) {
        int factCount = 0;
        if (i == 2)
            count++;
        else if (i > 2) {
            for (j = 2; j <= sqrt(i); j++) {
                if (i % j == 0) {
                    factCount = 1;
                    break;
                }
            }
            if (factCount == 0)
                count++;
        }
    }
    printf("%d\n", count);
}

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--) {
        int a, b;

        scanf("%d %d", &a, &b);

        primeCount(a, b);
    }

    return 0;
}