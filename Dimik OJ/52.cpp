#include <bits/stdc++.h>

using namespace std;

void solution()
{
    string str, target;
    cin >> str >> target;

    int l = str.length();
    int t = target.length();
    int count = 0;

    if (l < t)
    {
        cout << "0\n";
    }
    else if (l == t)
    {
        cout << ((str == target) ? "1\n" : "0\n");
    }
    else
    {
        for (int i = 0; i <= l - t; i++)
        {
            int j;
            for (j = 0; j < t; j++)
            {
                if (str[i + j] != target[j])
                    break;
            }
            if (j == t)
            {
                count++;
                j = 0;
            }
        }
        cout << count << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testCase;

    cin >> testCase;
    cin.ignore();

    while (testCase--)
        solution();

    return 0;
}