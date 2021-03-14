#include <math.h>
#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        if (a + b >= c && b + c >= a && a + c >= b) {
            double s = (a + b + c) / 2.0;
            double area = sqrt(s * (s - a) * (s - b) * (s - c));

            printf("Area = %.3lf\n", area);
        }
    }

    return 0;
}