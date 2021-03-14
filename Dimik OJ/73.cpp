#include <bits/stdc++.h>

using namespace std;

int main()
{
    char str[201];
    scanf("%[^\n]", str);

    for (int j = strlen(str) - 1; j >= 0; j--)
    {
        printf("%c", str[j]);
    }
    cout << endl;

    return 0;
}