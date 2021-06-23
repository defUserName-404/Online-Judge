#include <bits/stdc++.h>

using namespace std;

void solution()
{
    int n;
    cin >> n;
    vector<int> arr;

    int sum = 0, count = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
        sum += x;
    }

    double avg = (double)sum / n;

    for (auto i : arr)
    {
        if (i > avg)
            count++;
    }

    cout << fixed << setprecision(3) << ((double)count / n) * 100 << "%"
         << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testCase;
    cin >> testCase;

    while (testCase--)
        solution();

    return 0;
}