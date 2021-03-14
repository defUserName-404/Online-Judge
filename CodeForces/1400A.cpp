#include <bits/stdc++.h>

using namespace std;

char bin[120];
int t, n;

void solution() {
    scanf("%d %s", &n, bin);

    for (int i = 0; i < strlen(bin); i += 2)
        printf("%c", bin[i]);

    printf("\n");
}

int main() {
    scanf("%d", &t);

    while (t--)
        solution();

    return 0;
}