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
        scan(n, m);

        for (int i = 0; i < n; i++)
        {
            scan(x);
            arr.push_back(x);
        }

        count = sum = 0;

        sort(arr.begin(), arr.end());

        for (int i = 0; i < n; i++)
        {
            if (count != m && arr[i] < 0)
            {
                sum += arr[i];
                count++;
            }
            else
            {
                break;
            }
        }

        print(-sum, '\n');
    }
} Solution;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution.solution_function();

    return 0;
}