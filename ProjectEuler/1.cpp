#include <bits/stdc++.h>

using namespace std;

void solution()
{
    long long sum = 0;

    for (int i = 1; i < 1000; i++)
        if (i % 3 == 0 || i % 5 == 0)
            sum += i;

    cout << sum << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solution();

    return 0;
}