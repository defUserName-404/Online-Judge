#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCase;
    cin >> testCase;

    for (int loop = 1; loop <= testCase; loop++) {
        char str[1001];
        getchar();
        scanf("%[^\n]", str);
        int len = strlen(str);

        for (int i = len - 1; i >= 0; i--)
            printf("%c", str[i]);

        printf("\n");
    }

    return 0;
}