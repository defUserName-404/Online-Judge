#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

template <typename... T>
void scan(T &...args)
{
    ((cin >> args), ...);
}

template <typename... T>
void print(T... args)
{
    ((cout << args), ...);
}

class Solution_To_Problem
{
    // variables
    int a, b, c, d, m, n, p, q, s, t, x, y, z;
    int testCase, count, count1, count2, sum, sum1, sum2, temp;
    // ll r, l, k;
    // double e, f, g, h;
    // char ch, ch1, ch2;
    // bool con, con1, con2, check;
    // string str, s1, s2;
    vector<int> arr;
    // constants
    const ld Pi = acos(-1);
    const int Mod = 10'000'007;

  public:
    void solution_function()
    {
        scan(n, d);

        for (int i = 0; i < n; i++)
        {
            scan(x);
            arr.push_back(x);
        }

        count = 0;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (abs(arr[i] - arr[j]) <= d)
                    count++;
            }
        }

        print(2 * count, '\n');
    }
} Solution;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution.solution_function();

    return 0;
}