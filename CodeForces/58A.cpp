#include <bits/stdc++.h>

using namespace std;

void solution()
{
    string str1 = "hello";
    string str2;
    cin >> str2;

    int flag = 0;

    for (int i = 0; i < str2.length(); i++)
    {
        if (str2[i] == str1[flag])
            flag++;
    }

    cout << (flag == 5 ? "YES" : "NO");
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solution();

    return 0;
}