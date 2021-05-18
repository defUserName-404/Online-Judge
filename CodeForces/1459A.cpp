#include <bits/stdc++.h>

using namespace std;

string solution(int &n, string &r, string &b)
{
    int r_count = 0, b_count = 0;

    for (int i = 0; i < n; i++)
    {
        if (r[i] > b[i])
            ++r_count;
        else if (r[i] < b[i])
            ++b_count;
    }

    if (r_count > b_count)
        return "RED";
    else if (r_count < b_count)
        return "BLUE";
    else
        return "EQUAL";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testCase;

    cin >> testCase;

    while (testCase--)
    {
        int n;
        string r, b;
        cin >> n >> r >> b;

        cout << solution(n, r, b) << endl;
    }

    return 0;
}