#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    int sum, o, e;
    /*  sum = sum of the elements in the array
        o = total odd elements in the array
        e = total eve elements in the array */
    sum = o = e = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr.at(i) % 2 == 0)
            e++;
        else
            o++;

        sum += arr.at(i);
    }

    if (sum % 2 != 0)
        cout << "YES\n";
    else
    {
        // if there is no odd element or no even element, there is no way to get an odd sum
        if ((o != 0) && (e != 0))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int testCase;
    cin >> testCase;

    while (testCase--)
        solve();

    return 0;
}